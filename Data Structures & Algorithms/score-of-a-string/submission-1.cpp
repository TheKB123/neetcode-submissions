class Solution {
public:
    int scoreOfString(string s) {
        int sum = 0;
        for ( int i = 0, j = 1; j < s.size(); i++, j++ )
            sum += abs(s[i]-s[j]);
        return sum;
    }
};