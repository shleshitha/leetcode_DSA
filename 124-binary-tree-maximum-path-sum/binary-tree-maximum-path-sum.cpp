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
    int ans=INT_MIN;
    int helper(TreeNode* root){
        if(root==NULL)
        return 0;
        int l=max(helper(root->left),0);
        int r=max(helper(root->right),0);
        // cout<<l<<" "<<r<<endl;
        ans=max(max(ans,l+r+root->val),root->val);
        return max(l,r)+root->val;
    }
    int maxPathSum(TreeNode* root) {
        helper(root);
        return ans;
    }
};