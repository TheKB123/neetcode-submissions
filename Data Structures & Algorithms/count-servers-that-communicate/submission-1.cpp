class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int i, j, m = grid.size(), n = grid[0].size(), c = 0;
        vector<int> row(m, 0), col(n, 0);
        for ( i = 0; i < m; i++ )
            for ( j = 0; j < n; j++ )
                if ( grid[i][j] ) {
                    row[i]++;
                    col[j]++;
                }
        for ( i = 0; i < m; i++ )
            for ( j = 0; j < n; j++ )
                c += ( grid[i][j] && ( row[i] - 1 || col[j] - 1 ) );
        return c;
    }
};