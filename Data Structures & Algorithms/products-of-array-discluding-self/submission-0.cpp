class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int i = 0, n = nums.size();
        vector<int> a(n, 1), b(n, 1);
        for ( int i = 1; i < n; i++ ) {
            a[i] *= nums[i-1] * a[i-1];
            b[n-1-i] *= nums[n-i] * b[n-i];
        }
        for ( int i = 0; i < n; i++ )
            a[i] *= b[i];
        return a;
    }
};
