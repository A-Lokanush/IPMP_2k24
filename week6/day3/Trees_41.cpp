// Two nodes swapped in BST, correct it

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
    vector<int> a;
    void inorder(TreeNode * root){
        if(root){
            inorder(root->left);
            a.push_back(root->val);
            inorder(root->right);
        }
        return;
    }
    void change(TreeNode * root, int aa, int bb){
        if(root){
            change(root->left,aa,bb);
            if(root->val == aa){
                root->val = bb;
            } else if(root->val == bb){
                root->val = aa;
            }
            change(root->right,aa,bb);
        }
        return;
    }
    void recoverTree(TreeNode* root) {
        inorder(root);
        vector<int> b;
        b = a;
        sort(b.begin(), b.end());
        for(int i =0;i<a.size(); i++){
            if(a[i] != b[i]){
                change(root,a[i],b[i]);
                break;
            }
        }
    }
};
