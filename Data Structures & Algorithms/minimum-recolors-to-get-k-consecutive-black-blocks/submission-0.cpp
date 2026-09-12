class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int minwc = INT_MAX, wc = 0, left = 0;
        for ( int right = 0; right < blocks.size(); right++ ) {
            wc += ( blocks[right] == 'W' );
            if ( right >= k - 1 ) {
                minwc = min(minwc, wc);
                wc -= ( blocks[left++] == 'W' );
            }
        }
        return minwc;
    }
};