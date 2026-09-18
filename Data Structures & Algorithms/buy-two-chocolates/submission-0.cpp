class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int Min = INT_MAX, Min1 = INT_MAX;
        for ( int price : prices )
            if ( price < Min ) {
                Min1 = Min;
                Min = price;
            } else if ( price < Min1 )
                Min1 = price;
        if ( money < Min + Min1 )
            return money;
        return money - Min - Min1;
    }
};