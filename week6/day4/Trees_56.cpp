// tree using inorder and preorder traversal

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
    TreeNode * tree(vector<int>& pre, int preStart, int preEnd, vector<int>& in, int inStart, int inEnd){
        if(preStart>preEnd||inStart>inEnd) {
            return NULL;
        }
        int val = pre[preStart];
        TreeNode * node = new TreeNode(val);
        int k=0;
        for(int i = 0; i < in.size(); i++){
            if(val == in[i]){
                k=i;
                break;
            }
        }
        node->left = tree(pre, preStart+1, preStart + k - inStart, in, inStart, k -1);
        node->right = tree(pre, preStart + k - inStart  + 1, preEnd, in, k + 1, inEnd);
        return node;
    }
         
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return tree(preorder,0 , preorder.size() - 1, inorder, 0 , inorder.size() - 1);
    }
};
