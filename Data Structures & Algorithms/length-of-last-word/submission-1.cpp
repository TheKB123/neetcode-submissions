class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size() - 1, length = 0;
        while ( i >= 0 && s[i] == ' ' )
            i--;
        for ( i; i >= 0 && s[i] != ' '; i-- )
            length++;
        return length;
    }
};