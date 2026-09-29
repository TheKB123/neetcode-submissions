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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if ( !head )
            return head;
        ListNode* current = head;
        while ( current->next ) {
            current->next = new ListNode(gcd(current->val, current->next->val), current->next);
            current = current->next->next;
        }
        return head;
    }
};