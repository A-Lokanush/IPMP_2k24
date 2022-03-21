// sorted array to BST

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
    int pos = 0;
    TreeNode* tree(int i, int j){
        if(j < i){
            return NULL;
        }
        TreeNode * temp = new TreeNode();
        int mid = (i + j) >> 1;
        temp->left = tree(i, mid -1);
        temp->val = a[pos]; pos++;
        temp->right = tree(mid+1,j);
        return temp;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int size = nums.size();
        a = nums;
        return tree(1,size);
    }
};