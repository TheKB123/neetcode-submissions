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
    bool isPalindrome(ListNode* head) {
        if ( !head || !head->next )
            return 1;
        int c = 0;
        stack<int> st;
        ListNode* back = head;
        ListNode* front = head;
        while ( front ) {
            st.push(front->val);
            c++;
            front = front->next;
        }
        for ( int i = 1; i <= c / 2; i++ ) {
            if ( st.top() != back->val )
                return 0;
            back = back->next;
            st.pop();
        }
        return 1;
    }
};