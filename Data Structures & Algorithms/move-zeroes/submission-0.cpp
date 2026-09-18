class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int c = 1;
        for ( int i = 0; i + c < nums.size(); i++ )
            if ( nums[i] == 0 ) {
                for ( int j = i--; j + c < nums.size(); j++ )
                    swap(nums[j], nums[j+1]);
                c++;
            }
    }
};