// special tree from preorder traversal

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
TreeNode * tree(vector<int>& preorder, int start, int end){
    if (start > end) {
        return NULL;
    }
    TreeNode* node = new TreeNode(preorder[start]);
    int i;
    for (i = start; i <= end; i++) {
        if (preorder[i] > node->val) {
            break;
        }
    }
    node->left = tree(preorder, start + 1, i - 1);
    node->right = tree(preorder, i, end);
    return node;
}
    
TreeNode* bstFromPreorder(vector<int>& preorder) {
    return tree(preorder, 0, preorder.size() - 1);
}
};
