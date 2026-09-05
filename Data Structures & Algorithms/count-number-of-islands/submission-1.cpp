class Solution {
public:
    void dfs(vector<vector<char>>& grid, int i, int j, int n, int m) {
        if ( i < 0 || i >= n || j < 0 || j >= m || grid[i][j] == '0' )
            return;
        grid[i][j] = '0';
        dfs(grid, i - 1, j, n, m);
        dfs(grid, i + 1, j, n, m);
        dfs(grid, i, j - 1, n, m);
        dfs(grid, i, j + 1, n, m);
    }
    int numIslands(vector<vector<char>>& grid) {
        int i, j, n = grid.size(), m = grid[0].size(), count = 0;
        array<int, 4> dy = {-1, 1, 0, 0}, dx = {0, 0, -1, 1};
        for ( i = 0; i < n; i++ )
            for ( j = 0; j < m; j++ )
                if ( grid[i][j] == '1' ) {
                    dfs(grid, i, j, n, m);
                    count++;
                }
        return count;
    }
};
