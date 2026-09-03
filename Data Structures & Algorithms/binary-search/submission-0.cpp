class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1, mid;
        do {
            mid = ( left + right ) / 2;
            if ( nums[mid] == target )
                return mid;
            if ( nums[mid] < target )
                left = mid + 1;
            else
                right = mid - 1;
        } while ( left <= right );
        return -1;
    }
};
