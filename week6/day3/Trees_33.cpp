// is foldable tree

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
    bool isIt(TreeNode * rootl, TreeNode * rootr){
        if(rootl && rootr){
            if(rootl->val == rootr->val){
              return true && isIt(rootl->left, rootr->right) && isIt(rootl->right, rootr->left);              
            } else {
                return false;
            }
        }
        if(!rootl && !rootr){
            return true;
        }
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        return isIt(root, root);
    }
};

