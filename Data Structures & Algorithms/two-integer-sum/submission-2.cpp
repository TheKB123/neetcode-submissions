class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> dif;
        for ( int i = 0; i < n; i++ )
            dif[target-nums[i]] = i;
        for ( int i = 0; i < n; i++ )
            if ( dif[nums[i]] && dif[nums[i]] != i )
                return {i, dif[nums[i]]};
        return {};
    }
};
