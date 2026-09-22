class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if ( nums.size() < 3 )
            return nums[0];
        int l = 0, m, r = nums.size(), n = nums.size() - 1;
        do {
            m = l + ( r - l ) / 2;
            if ( m == 0 || m == n || nums[m] != nums[m-1] && nums[m] != nums[m+1] )
                break;
            if ( ( m - ( nums[m-1] == nums[m] ) ) % 2 )
                r = m - 1 - (nums[m-1] == nums[m]);
            else
                l = m + 1 + (nums[m] == nums[m+1]);
        } while ( l <= r );
        return nums[m];
    }
};