class Solution {
public:
    vector<int> memo = vector<int>(101, 0);
    int minCostClimbingStairs(vector<int>& cost, int i = 0) {
        if ( i >= cost.size() )
            return 0;
        if ( memo[i] )
            return memo[i];
        memo[i] = min(minCostClimbingStairs(cost, i + 1), minCostClimbingStairs(cost, i + 2)) + cost[i];
        if ( i == 0 )
            return min(memo[i], minCostClimbingStairs(cost, i + 1));
        return memo[i];
    }
};
