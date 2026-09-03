class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        int i, left, right, n = nums.size() - 1;
        for ( i = 0; i <= n; i++ ) {
            left = i + 1;
            right = n;
            if ( i == 0 || ( i > 0 && nums[i] != nums[i-1] ) )
                
                while ( left < right )
                    if ( nums[left] + nums[right] + nums[i] == 0 ) {
                        res.push_back({nums[i], nums[left], nums[right]});
                        left++;
                        right--;
                        while ( left < right && nums[left] == nums[left-1] )
                            left++;
                    } else if ( nums[left] + nums[right] + nums[i] < 0 ) {
                        left++;
                    } else
                        right--;
        }
        return res;
    }
};
