class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj_element = nums[0], count = 0;
        for ( int num : nums )
            if ( maj_element == num || !count ) {
                if ( maj_element != num )
                    maj_element = num;
                count++;
            } else
                count--;
        return maj_element;
    }
};