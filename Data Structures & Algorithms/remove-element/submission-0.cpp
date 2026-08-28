class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i, j = 0, n = nums.size();
        vector<int> aux = nums;
        nums.clear();
        nums.reserve(n);
        for ( i = 0; i < n; i++ )
            if ( aux[i] != val )
                nums[j++] = aux[i];
        return j;
    }
};