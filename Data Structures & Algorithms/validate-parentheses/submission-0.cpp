class Solution {
public:
    bool isValid(string s) {
        stack<char> parantheses;
        unordered_map<char, char> dictionary = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };
        for ( char ch : s )
            if ( !parantheses.empty() && dictionary[ch] && dictionary[ch] == parantheses.top() )
                parantheses.pop();
            else
                parantheses.push(ch);
        return parantheses.empty();
    }
};
