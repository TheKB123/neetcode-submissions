class Solution {
public:
    unordered_set<string> validOperations = {"+", "D", "C"};
    int calPoints(vector<string>& operations) {
        int s, s1;
        stack<int> opstack;
        for ( const auto& op : operations ) {
            if ( !validOperations.count(op) )
                opstack.push(stoi(op));
            else {
                if ( opstack.empty() )
                    continue;
                if ( op == "+" ) {
                    s = opstack.top();
                    opstack.pop();
                    if ( !opstack.empty() ) {
                        s1 = opstack.top();
                        opstack.push(s);
                        opstack.push(s + s1);
                    } else
                        opstack.push(s);
                }
                if ( op == "C" )
                    opstack.pop();
                if ( op == "D" )
                    opstack.push(opstack.top() * 2);
            }
        }
        s = 0;
        while ( !opstack.empty() ) {
            s += opstack.top();
            opstack.pop();
        }
        return s;
    }
};