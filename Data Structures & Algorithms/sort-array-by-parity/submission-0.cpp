class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        if ( n < 2 )
            return nums;
        int i = 0, j = n - 1;
        vector<int> result(n);
        for ( int num : nums ) {
            if ( num % 2 == 0 )
                result[i++] = num;
            else
                result[j--] = num;
        }
        return result;
    }
};