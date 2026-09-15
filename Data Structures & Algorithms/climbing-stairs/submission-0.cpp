class Solution {
public:
    vector<int> memo = vector<int>(46, 0);
    int climbStairs(int n) {
        if ( n < 0 )
            return 0;
        if ( n < 2 )
            return 1;
        if ( memo[n] )
            return memo[n];
        return memo[n] = climbStairs(n - 1) + climbStairs(n - 2);
    }
};
