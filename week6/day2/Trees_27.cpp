// error for some case only

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* ans;
    void inorder(TreeNode * root,TreeNode * p, TreeNode * q){
        if(root){
            inorder(root->left,p,q);
            if(root->val >= p->val && root->val < q->val){
                if(root->val == p->val){
                    if(p->left) {
                        if(p->left->val == q->val){
                           ans = p;
                           return;
                        }
                    } else if(p->right){
                        if(p->right->val == q->val){
                           ans = p;
                           return;
                        }
                    } else {
                        ans = q;
                        return;
                    }
                } else {
                    ans = root;
                    return;
                }
            }
            inorder(root->right,p,q);
        }
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(p->val < q->val){
            inorder(root,p,q);
        } else {
            inorder(root,q,p);
        }
        return ans;
    }
};
