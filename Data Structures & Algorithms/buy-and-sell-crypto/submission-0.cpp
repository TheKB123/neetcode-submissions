class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0, left = INT_MAX;
        for ( int right : prices ) {
            if ( left >= right )
                left = right;
            maxprofit = max(maxprofit, right - left);
        }
        return maxprofit;
    }
};
