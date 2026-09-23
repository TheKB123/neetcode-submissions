class Solution {
public:
    int m, n, cur_color, mod_color;
    void dfs(vector<vector<int>>& image, int i, int j) {
        if ( i < 0 || j < 0 || i >= m || j >= n || image[i][j] != cur_color )
            return;
        image[i][j] = mod_color;
        dfs(image, i - 1, j);
        dfs(image, i + 1, j);
        dfs(image, i, j - 1);
        dfs(image, i, j + 1);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if ( image[sr][sc] == color )
            return image;
        m = image.size();
        n = image[0].size();
        cur_color = image[sr][sc];
        mod_color = color;
        dfs(image, sr, sc);
        return image;
    }
};