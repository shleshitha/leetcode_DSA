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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        vector<vector<int>>ans;
        if(root==NULL) return ans;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int>t;
            for(int i=0;i<size;i++){
                TreeNode *n=q.front();
                q.pop();
                if(n->left)
                q.push(n->left);
                if(n->right)
                q.push(n->right);
                t.push_back(n->val);
            }
            ans.push_back(t);
            
        }
        return ans;
    }
};