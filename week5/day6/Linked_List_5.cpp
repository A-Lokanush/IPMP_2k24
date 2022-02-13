/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        cout<<node->val<<" ";
        ListNode* node_to_delete = node->next;
        cout<<node_to_delete->val<<" ";
        node->val = node->next->val;
        node->next = node->next->next;
        delete node_to_delete;
    }
};