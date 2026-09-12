class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int l = 0, s = 0, smin = k * threshold, c = 0;
        for ( int r = 0; r < arr.size(); r++ ) {
            s += arr[r];
            if ( r >= k - 1 ) {
                c += ( s >= smin );
                s -= arr[l++];
            }
        }
        return c;
    }
};