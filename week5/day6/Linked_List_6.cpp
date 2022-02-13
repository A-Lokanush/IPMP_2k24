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
    bool hasCycle(ListNode *head) {
        if (head == NULL || head->next == NULL) {
            return false;
        } else {
            ListNode *a = head, *b = head->next;
            
            while (a != b) {
                if (b == NULL || b->next == NULL) {
                    return false;
                } else {
                    a = a->next;
                    b = b->next->next;
                }
            }
            return true;
        }
    }
};