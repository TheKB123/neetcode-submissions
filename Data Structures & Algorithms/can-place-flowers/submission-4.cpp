class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for ( int i = 0; i < flowerbed.size() - 1; i++ )
            if ( ( ( i == 0 || i == flowerbed.size() - 2 ) && flowerbed[i] == 0 && flowerbed[i+1] == 0 ) || ( i < flowerbed.size() - 2 && flowerbed[i] == 0 && flowerbed[i+1] == 0 && flowerbed[i+2] == 0 ) ) {
                n--;
                flowerbed[i+(i==flowerbed.size()-1||(i<flowerbed.size()-2&&flowerbed[i]==0&&flowerbed[i+1]==0&&flowerbed[i+2]==0))] = 1;
            }
        return n <= 0 || ( flowerbed.size() < 2 && flowerbed[0] == 0 && n == 1 );
    }
};