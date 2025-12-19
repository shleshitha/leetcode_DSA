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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL)
        return ans;
        queue<TreeNode*>q;
        q.push(root);
        bool ltor=true;
        while(!q.empty()){
            int s=q.size();
            vector<int>temp(s);
            for(int i=0;i<s;i++){
                TreeNode* n=q.front();
                q.pop();
                int idx=ltor ? i :s-i-1;
                temp[idx]=n->val;
                if(n->left)
                q.push(n->left);
                if(n->right)
                q.push(n->right);
            }
            // if(!ltor)
            // reverse(temp.begin(),temp.end());
            ltor=!ltor;
            ans.push_back(temp);
        }
        return ans;
    }
};