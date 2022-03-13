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
    int res;
    int diameterOfBinaryTree(TreeNode* root) {

        res = 0;
        dfs(root);
        return res;
    }
    int dfs(TreeNode* node){

        if(!node) return 0;

        int l = node->left ? 1 + dfs(node->left) : 0;
        int r = node->right ? 1 + dfs(node->right) : 0;
        res = max(res, l + r);
        return max(l, r);
    }
};