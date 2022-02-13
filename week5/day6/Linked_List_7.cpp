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
    ListNode *detectCycle(ListNode *head) {
        if (!head || !head->next)
            return nullptr;
        ListNode *b = head, *a = head;
        while(b && b->next && a) {
            b = b->next->next;
            a = a->next;
            if (b == a) {
                b = head;
                while (b != a) {                    
                    b = b->next;
                    a = a->next;
                }
                return a;
            }
        }
        return nullptr;
    }
};