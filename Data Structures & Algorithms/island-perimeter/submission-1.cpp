class Solution {
public:
    int n, m, perimeter = 0;
    void dfs(vector<vector<int>>& grid, int i, int j) {
        if ( i < 0 || i >= n || j < 0 || j >= m || !grid[i][j] ) {
            perimeter++;
            return;
        }
        if ( grid[i][j] == -1 )
            return;
        grid[i][j] = -1;
        dfs(grid, i - 1, j);
        dfs(grid, i + 1, j);
        dfs(grid, i, j - 1);
        dfs(grid, i, j + 1);
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        for ( int i = 0; i < n; i++ )
            for ( int j = 0; j < m; j++ )
                if ( grid[i][j] )
                    dfs(grid, i, j);
        return perimeter;
    }
};