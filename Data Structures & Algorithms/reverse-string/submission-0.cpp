class Solution {
public:
    void reverseString(vector<char>& s) {
        int i, n = s.size() - 1;
        for ( i = 0; i <= n / 2; i++ )
            swap(s[i], s[n-i]);
    }
};