class Solution {
public:
    void bfs(vector<vector<char>>& grid, vector<vector<bool>>& visited, int i, int j, int n, int m, array<int, 4>& dy, array<int, 4>& dx) {
        visited[i][j] = 1;
        queue<pair<int, int>> q;
        q.push(make_pair(i, j));
        while ( !q.empty() ) {
            int y = q.front().first, x = q.front().second;
            for ( int k = 0; k < 4; k++ ) {
                int ni = y + dy[k], nj = x + dx[k];
                if ( ni >= 0 && ni < n && nj >= 0 && nj < m && !visited[ni][nj] && grid[ni][nj] == '1' ) {
                    cout << ni << " " << nj << "\n";
                    visited[ni][nj] = 1;
                    q.push(make_pair(ni, nj));
                }
            }
            q.pop();
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int i, j, n = grid.size(), m = grid[0].size(), count = 0;
        array<int, 4> dy = {-1, 1, 0, 0}, dx = {0, 0, -1, 1};
        vector<vector<bool>> visited(n, vector<bool>(m, 0));
        for ( i = 0; i < n; i++ )
            for ( j = 0; j < m; j++ )
                if ( !visited[i][j] && grid[i][j] == '1' ) {
                    count++;
                    bfs(grid, visited, i, j, n, m, dy, dx);
                }
        return count;
    }
};
