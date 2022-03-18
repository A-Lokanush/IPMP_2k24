// BST TO LL

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
    vector<TreeNode *> a;
    void preorder(TreeNode * root){
        if(root){
            a.push_back(root);
            preorder(root->left);
            preorder(root->right);
        }
        return;
    }
    void flatten(TreeNode* root) {
        preorder(root);
        for(int i = 0; i+1 < a.size(); ++i){
            a[i]->left = NULL;
            a[i]->right = a[i+1];
        }
    }
};
