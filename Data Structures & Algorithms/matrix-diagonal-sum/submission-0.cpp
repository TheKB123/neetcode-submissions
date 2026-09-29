class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        if ( mat.size() == 1 )
            return mat[0][0];
        int i, sum = 0, n = mat.size();
        for ( i = 0; i < n; i++ ) {
            sum += mat[i][i];
            sum += mat[n-1-i][i];
        }
        return sum - mat[n/2][n/2] * ( n % 2 );
    }
};