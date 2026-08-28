class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i, c = 0, cmax = 0, n = nums.size();
        for ( i = 0; i <= n; i++ ) {
            if ( i == n || nums[i] == 0 ) {
                cmax = max(cmax, c);
                c = 0;
            } else
                c++;
        }
        return cmax;
    }
};