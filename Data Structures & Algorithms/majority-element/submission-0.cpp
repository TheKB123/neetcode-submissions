class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        for ( int num : nums ) {
            freq[num]++;
            if ( freq[num] * 2 > nums.size() )
                return num;
        }
        return -1;
    }
};