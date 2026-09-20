class KthLargest {
public:
    int k;
    priority_queue<int, vector<int>, greater<int>> pq;
    KthLargest(int x, vector<int>& nums) : k(x) {
        for ( int num : nums ) {
            pq.push(num);
            if ( pq.size() > k )
                pq.pop();
        }
    }
    
    int add(int val) {
        pq.push(val);
        if ( pq.size() > k )
            pq.pop();
        return pq.top();
    }
};
