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
private: 
    vector<int> res;
public:
    int inorder(TreeNode* root){
        if(root != NULL){
            inorder(root->left);
            res.push_back(root->val);
            inorder(root->right);
        }
        return 1;
    }
    vector<int> inorderTraversal(TreeNode* root) {
        int a = inorder(root);
        return res;
    }
};