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
    int countNodes(ListNode* head) {
        int c = 0;
        ListNode* tail = head;
        while ( ( tail = tail->next ) )
            c++;
        return c;
    }
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        int m = countNodes(headA), n = countNodes(headB);
        for ( m; m > n; m-- )
            headA = headA->next;
        for ( n; n > m; n-- )
            headB = headB->next;
        while ( headA && headB && headA != headB ) {
            headA = headA->next;
            headB = headB->next;
        }
        if ( !headA || !headB )
            return nullptr;
        return headA;
    }
};