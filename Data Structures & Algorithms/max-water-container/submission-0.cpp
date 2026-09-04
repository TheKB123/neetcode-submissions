class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0, right = heights.size() - 1, maxvolume = 0;
        while ( left < right ) {
            maxvolume = max(maxvolume, (right - left) * min(heights[left], heights[right]));
            if ( heights[left] < heights[right] )
                left++;
            else
                right--;
        }
        return maxvolume;
    }
};
