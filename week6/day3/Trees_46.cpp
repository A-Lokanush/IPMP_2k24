// Root to leaf path sum equal to a given number

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
    bool hasPathSum(TreeNode* root, int t) {
        if(root){
            if(root->right == NULL && root->left == NULL && root->val == t){
                return true;
            }
            return hasPathSum(root->left, t - root->val) || hasPathSum(root->right, t - root->val);
        } else {
            return false;
        }    
    }
};
