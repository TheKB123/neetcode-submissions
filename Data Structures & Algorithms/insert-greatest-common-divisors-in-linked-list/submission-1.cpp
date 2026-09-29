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
    int gmd(int a, int b) {
        while ( b != 0 ) {
            int r = a % b;
            a = b;
            b = r;
        }
        return a;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if ( !head )
            return head;
        ListNode* current = head;
        while ( current->next ) {
            current->next = new ListNode(gmd(current->val, current->next->val), current->next);
            current = current->next->next;
        }
        return head;
    }
};