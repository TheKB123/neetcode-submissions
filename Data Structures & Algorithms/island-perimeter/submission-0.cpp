class Solution {
public:
    int n, m;
    int dfs(vector<vector<int>>& grid, vector<vector<bool>>& visited, int i, int j) {
        if ( i < 0 || i >= n || j < 0 || j >= m || !grid[i][j] || visited[i][j] )
            return ( i < 0 || i >= n || j < 0 || j >= m || !grid[i][j] );
        visited[i][j] = 1;
        return dfs(grid, visited, i - 1, j) + dfs(grid, visited, i + 1, j) + dfs(grid, visited, i, j - 1) + dfs(grid, visited, i, j + 1);
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        vector<vector<bool>> visited(n, vector<bool>(m, 0));
        for ( int i = 0; i < n; i++ )
            for ( int j = 0; j < m; j++ )
                if ( grid[i][j] )
                    return dfs(grid, visited, i, j);
    }
};