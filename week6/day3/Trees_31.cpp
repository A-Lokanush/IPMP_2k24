// checking balanced tree

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
    int height(TreeNode * root){
        if(root){
            int leftHeight = height(root->left);
            int rightHeight = height(root->right);
            int Height = leftHeight > rightHeight ? leftHeight : rightHeight;
            return Height + 1;
        } else {
            return 0;
        }
    }
    bool really(TreeNode * root){
        if(root){
            int leftHeight = height(root->left);
            int rightHeight = height(root->right);
            if(abs(leftHeight - rightHeight) > 1){
                return false;
            } else {
                return true && really(root->left) && really(root->right);
            }
        }
        return true;
    }
    bool isBalanced(TreeNode* root) {
        return really(root);
    }
};
