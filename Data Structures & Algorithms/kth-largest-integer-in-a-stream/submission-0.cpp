class KthLargest {
public:
    int k;
    priority_queue<int> pq;
    stack<int> st;
    KthLargest(int x, vector<int>& nums) : k(x) {
        for ( int num : nums )
            pq.push(num);
    }
    
    int add(int val) {
        pq.push(val);
        for ( int i = 1; i < k; i++ ) {
            st.push(pq.top());
            pq.pop();
        }
        int kval = pq.top();
        while ( !st.empty() ) {
            pq.push(st.top());
            st.pop();
        }
        return kval;
    }
};
