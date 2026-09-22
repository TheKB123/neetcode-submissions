class Solution {
public:
    bool isPerfectSquare(long long num) {
        long long low = 1, mid, high = num;
        do {
            mid = low + ( high - low ) / 2;
            if ( mid * mid == num )
                break;
            if ( mid * mid > num )
                high = mid - 1;
            else
                low = mid + 1;
        } while ( low <= high );
        return mid * mid == num;
    }
};