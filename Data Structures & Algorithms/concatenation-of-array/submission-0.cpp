class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int i, n = nums.size();
        vector<int> result(n*2);
        for ( i = 0; i < n; i++ ) {
            result[i] = nums[i];
            result[i+n] = nums[i];
        }
        return result;
    }
};