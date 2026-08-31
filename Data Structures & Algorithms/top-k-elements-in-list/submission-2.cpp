class Solution {
public:
    struct Comparator {
        const vector<int>& data;
        Comparator(const vector<int>& d) : data(d) {}
        bool operator()(int a, int b) const {
            return data[1000+a] < data[1000+b];
        }
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> freq(2002, 0), v(k);
        vector<bool> checked(2002, 0);
        for ( int num : nums )
            freq[num+1000]++;
        priority_queue<int, vector<int>, Comparator> res{(Comparator(freq))};
        for ( int num : nums )
            if ( !checked[num+1000] ) {
                res.push(num);
                checked[num+1000] = 1;
            }
        for ( int i = 0; i < k; i++ ) {
            v[i] = res.top();
            res.pop();
        }
        return v;
    }
};
