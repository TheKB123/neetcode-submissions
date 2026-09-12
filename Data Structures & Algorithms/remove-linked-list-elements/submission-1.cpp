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
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* current = head;
        ListNode dummy(0);
        ListNode* head1 = &dummy;
        ListNode* current1 = head1;
        while ( current ) {
            if ( current->val != val ) {
                ListNode* aux = current->next;
                current1->next = current;
                current = current->next;
                current1 = current1 = current1->next;
            } else
                current = current->next;
            current1->next = nullptr;
        }
        return head1->next;
    }
};