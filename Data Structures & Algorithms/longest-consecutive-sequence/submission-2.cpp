class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int c, cmax = 0;
        unordered_set<int> freq;
        for ( int num : nums )
            freq.insert(num);
        for ( int num : nums )
            if ( !freq.count(num-1) ) {
                c = 1;
                while ( freq.count(num+c) )
                    c++;
                cmax = max(c, cmax);
            }
        return cmax;
    }
};
//2 20 4 10 3 4 5
//2 3 4 5
//
