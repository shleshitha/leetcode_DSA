class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
        unordered_set<string> available(supplies.begin(), supplies.end()); // Store available ingredients
        unordered_map<string, vector<string>> graph; // Ingredient -> Dependent Recipes
        unordered_map<string, int> indegree; // Recipe -> Count of required ingredients

        // Initialize indegree map and graph
        for (int i = 0; i < recipes.size(); i++) {
            indegree[recipes[i]] = ingredients[i].size(); // Number of ingredients needed
            for (const string& ing : ingredients[i]) {
                graph[ing].push_back(recipes[i]); // Add dependency (ingredient -> recipe)
            }
        }

        // Queue for BFS
        queue<string> q;

        // Add all supplies (ingredients available at the start)
        for (const string& item : supplies) {
            q.push(item);
        }

        vector<string> result;

        // Process recipes in topological order
        while (!q.empty()) {
            string curr = q.front();
            q.pop();

            // If `curr` is a recipe and can be made, add it to the result
            if (indegree.count(curr)) {
                result.push_back(curr);
            }

            // Reduce indegree of dependent recipes
            for (const string& dependent : graph[curr]) {
                indegree[dependent]--;
                if (indegree[dependent] == 0) {
                    q.push(dependent); // Recipe can now be made
                }
            }
        }

        return result;
    }
};
