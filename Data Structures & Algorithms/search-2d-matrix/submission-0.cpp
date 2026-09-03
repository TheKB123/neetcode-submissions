class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int up = 0, down = matrix.size() - 1, midy, left = 0, right = matrix[0].size() - 1, midx, n = matrix.size() - 1, m = matrix[0].size() - 1;
        do {
            midy = up + ( down - up ) / 2;
            if ( matrix[midy][0] <= target && matrix[midy][m] >= target )
                break;
            if ( matrix[midy][0] > target )
                down = midy - 1;
            else
                up = midy + 1;
        } while ( up <= down );
        do {
            midx = left + ( right - left ) / 2;
            if ( matrix[midy][midx] == target )
                break;
            if ( matrix[midy][midx] > target )
                right = midx - 1;
            else
                left = midx + 1;
        } while ( left <= right );
        return ( matrix[midy][midx] == target );
    }
};
