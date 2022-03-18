// sum of BST keys within range

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
    int inorder(TreeNode * root, int l, int h){
        if(root){
            if(l <= root->val && h >= root->val){
                return root->val + inorder(root->left,l,h) + inorder(root->right,l,h);
            } else {
                return inorder(root->left,l,h) + inorder(root->right,l,h);
            }
        } 
        return 0;
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        return inorder(root,low,high);
    }
};
