class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0, r = nums.size(), m;
        while ( l <= r ) {
            m = l + ( r - l ) / 2;
            if ( m >= nums.size() || nums[m] == target )
                return m;
            if ( nums[m] < target )
                l = m + 1;
            else
                r = m - 1;
        }
        return m + ( target > nums[m] );
    }
};