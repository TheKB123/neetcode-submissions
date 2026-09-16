class Solution {
public:
    vector<int> T = vector<int>(38, -1);
    int tribonacci(int n) {
        if ( n < 3 )
            return n > 0;
        if ( T[n] > -1 )
            return T[n];
        return T[n] = tribonacci(n-3) + tribonacci(n-2) + tribonacci(n-1);
    }
};