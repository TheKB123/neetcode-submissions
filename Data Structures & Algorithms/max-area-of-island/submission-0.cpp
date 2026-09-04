class Solution {
public:
    int bfs(vector<vector<int>>& grid, vector<vector<bool>>& visited, int i, int j, int n, int m, array<int, 4>& dy, array<int, 4>& dx) {
        visited[i][j] = 1;
        queue<pair<int, int>> q;
        int current_size = 1;
        q.push(make_pair(i, j));
        while ( !q.empty() ) {
            int i = q.front().first, j = q.front().second;
            q.pop();

            for ( int k = 0; k < 4; k++ ) {
                int ni = i + dy[k], nj = j + dx[k];
                if ( ni >= 0 && ni < n && nj >= 0 && nj < m && !visited[ni][nj] && grid[ni][nj] ) {
                    q.push(make_pair(ni, nj));
                    visited[ni][nj] = 1;
                    current_size++;
                }
            }
        }
        cout << current_size << "\n";
        return current_size;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int i, j, n = grid.size(), m = grid[0].size(), size_max = 0;
        array<int, 4> dy = {-1, 1,  0, 0}, dx = {0, 0, -1, 1};
        vector<vector<bool>> visited(n, vector<bool>(m, 0));
        for ( i = 0; i < n; i++ )
            for ( j = 0; j < m; j++ )
                if ( !visited[i][j] && grid[i][j] )
                    size_max = max(size_max, bfs(grid, visited, i, j, n, m, dy, dx));
        return size_max;
    }
};
