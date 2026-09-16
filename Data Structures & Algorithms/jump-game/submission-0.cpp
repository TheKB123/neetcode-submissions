class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max_step = 0;
        for ( int i = 0; i < nums.size(); i++ ) {
            if ( max_step < i )
                return 0;
            max_step = max(max_step, i + nums[i]);
        }
        return 1;
    }
};
