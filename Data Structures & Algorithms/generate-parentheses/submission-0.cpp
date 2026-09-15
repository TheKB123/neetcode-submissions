class Solution {
public:
    void backtracking(vector<string>& result, string current, int open, int close, int& n) {
        if ( open + close >= n * 2 ) {
            result.push_back(current);
            return;
        }
        if ( open < n )
            backtracking(result, current + '(', open + 1, close, n);
        if ( open > close )
            backtracking(result, current + ')', open, close + 1, n);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string current;
        backtracking(result, current, 0, 0, n);
        return result;
    }
};
