/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int left = 1, right = n, mid, pick_comparision;
        while ( left <= right ) {
            mid = left + ( right - left ) / 2;
            pick_comparision = guess(mid);
            if ( pick_comparision == 0 )
                return mid;
            if ( pick_comparision == 1 )
                left = mid + 1;
            else
                right = mid - 1;
        }
        return 0;
    }
};