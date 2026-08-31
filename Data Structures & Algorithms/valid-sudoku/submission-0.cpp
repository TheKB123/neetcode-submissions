class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<bool>> x(9, vector<bool>(10, 0)), y(9, vector<bool>(10, 0)), matrix(9, vector<bool>(10, 0));
        for ( int i = 0; i < 9; i++ )
            for ( int j = 0; j < 9; j++ )
                if ( board[i][j] != '.' ) {
                    int n = ( board[i][j] - '0' );
                    if ( x[i][n] || y[j][n] || matrix[i/3*3+j/3][n] )
                        return 0;
                    x[i][n] = 1;
                    y[j][n] = 1;
                    matrix[i/3*3+j/3][n] = 1;
                }
        return 1;
    }
};
