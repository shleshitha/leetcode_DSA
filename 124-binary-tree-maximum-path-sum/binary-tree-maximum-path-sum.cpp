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
    int helper(TreeNode* root,int &sum){
        if(root==NULL) return 0;
        int l=max(helper(root->left,sum),0);
        int r=max(helper(root->right,sum),0);
        sum=max(sum,max(l+r+root->val,root->val));
        return max(l,r)+root->val;
    }
    int maxPathSum(TreeNode* root) {
        int sum=INT_MIN;
        helper(root,sum);
        return sum;
    }
};