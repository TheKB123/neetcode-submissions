class Solution {
public:
    int calPoints(vector<string>& operations) {
        int s, s1;
        stack<int> opstack;
        for ( const auto& op : operations ) {
            if ( op == "+" ) {
                s = opstack.top();
                opstack.pop();
                if ( !opstack.empty() ) {
                    s1 = opstack.top();
                    opstack.push(s);
                    opstack.push(s + s1);
                } else
                    opstack.push(s);
            } else if ( op == "C" ) {
                opstack.pop();
            } else if ( op == "D" ) {
                opstack.push(opstack.top() * 2);
            } else
                opstack.push(stoi(op));
        }
        s = 0;
        while ( !opstack.empty() ) {
            s += opstack.top();
            opstack.pop();
        }
        return s;
    }
};