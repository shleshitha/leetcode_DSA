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
class preorder{
    stack<TreeNode*>s;
    public:
    preorder(TreeNode *root){
        s.push(root);
    }
    bool hasnext(){
        return !s.empty();
    }
    int getnext(){
        TreeNode *n=s.top();
        s.pop();
        if(n->right)
        s.push(n->right);
        if(n->left)
        s.push(n->left);
        return n->val;
    }
};
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(root==NULL) return ans;
        preorder p(root);
        while(p.hasnext()){
            ans.push_back(p.getnext());
        }
        return ans;
    }
};