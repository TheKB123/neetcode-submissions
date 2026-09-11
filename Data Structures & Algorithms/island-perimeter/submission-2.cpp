class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int perimeter = 0;
        for ( int i = 0; i < grid.size(); i++ )
            for ( int j = 0; j < grid[i].size(); j++ )
                if ( grid[i][j] )
                    perimeter += ( i == 0 || !grid[i-1][j] ) + ( i == grid.size() - 1 || !grid[i+1][j] ) + ( j == 0 || !grid[i][j-1] ) + ( j == grid[i].size() - 1 || !grid[i][j+1] );
        return perimeter;
    }
};