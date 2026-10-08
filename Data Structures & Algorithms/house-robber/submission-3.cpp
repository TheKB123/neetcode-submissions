class Solution {
public:
    int rob(vector<int>& nums) {
        int rob1 = 0, rob2 = 0, max_rob;
        for ( int num : nums ) {
            max_rob = max(rob1 + num, rob2);
            rob1 = rob2;
            rob2 = max_rob;
        }
        return rob2;
    }
};
