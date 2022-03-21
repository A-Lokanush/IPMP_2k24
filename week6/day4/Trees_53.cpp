// sorted linked list to BST

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    ListNode * curr;
    TreeNode * tree(int i, int j){
        if(j<i){
            return NULL;
        }
        TreeNode * temp = new TreeNode();
        int mid = (i + j) >> 1;
        temp->left = tree(i,mid-1);
        temp->val = curr->val;
        curr = curr->next;
        temp->right = tree(mid+1, j);
        return temp;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        curr = head;
        int count = 0;
        while(curr){
            curr = curr->next;
            count++;
        }
        curr = head;
        return tree(1,count);
    }
};
