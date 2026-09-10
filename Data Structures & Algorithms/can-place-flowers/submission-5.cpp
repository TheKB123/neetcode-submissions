class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int i, m = flowerbed.size();
        for ( i = 0; i < m; i++ )
            if ( flowerbed[i] == 0 && ( i == 0 || flowerbed[i-1] == 0 ) && ( i == m - 1 || flowerbed[i+1] == 0 ) ) {
                flowerbed[i] = 1;
                n--;
            }
        return n <= 0;
    }
};