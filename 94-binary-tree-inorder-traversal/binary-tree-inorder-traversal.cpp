/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        stack<TreeNode*>s;
        // s.push(root);
        TreeNode* t=root;
        while(!s.empty() || t){
            while(t){
                s.push(t);
                t=t->left;
            }
            TreeNode *n=s.top();
            ans.push_back(s.top()->val);
            t=n->right;
            s.pop();
            // t=t->right;
        }
        return ans;
    }
};