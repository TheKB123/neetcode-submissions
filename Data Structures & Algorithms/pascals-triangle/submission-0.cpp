class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal_triangle(numRows);
        for ( int i = 0; i < numRows; i++ ) {
            pascal_triangle[i].resize(i+1, 1);
            for ( int j = 1; j < i; j++ )
                pascal_triangle[i][j] = pascal_triangle[i-1][j-1] + pascal_triangle[i-1][j];
        }
        return pascal_triangle;
    }
};