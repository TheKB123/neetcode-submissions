class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int l = 0, r;
        unordered_set<int> freq;
        for ( r = 0; r < nums.size(); r++ ) {
            if ( r > k )
                freq.erase(nums[l++]);
            if ( freq.count(nums[r]) )
                return 1;
            freq.insert(nums[r]);
        }
        return 0;
    }
};