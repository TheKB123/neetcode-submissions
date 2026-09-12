class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int l = 0, r = 0, s = 0, s1 = 0, smax = 0;
        for ( r; r < customers.size(); r++ ) {
            s += customers[r] * grumpy[r];
            s1 += customers[r] * !grumpy[r];
            if ( r >= minutes - 1 ) {
                smax = max(smax, s);
                s -= customers[l] * grumpy[l++];
            }
        }
        return smax + s1;
    }
};