class Solution {
public:
    int mySqrt(int n) {
        int l = 0, m, r = n, last;
        do {
            m = l + ( r - l ) / 2;
            if ( (long long)m * m > n ) {
                r = m - 1;
            } else if ( (long long)m * m < n ) {
                l = m + 1;
                last = m;
            } else
                return m;
        } while ( l <= r );
        return last;
    }
};