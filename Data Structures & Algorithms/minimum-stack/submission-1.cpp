class MinStack {
public:
    stack<int> minstack, stack1;
    MinStack() {}
    
    void push(int val) {
        stack1.push(val);
        if ( minstack.empty() || minstack.top() >= val )
            minstack.push(val);
    }
    
    void pop() {
        if ( !minstack.empty() && stack1.top() == minstack.top() )
            minstack.pop();
        stack1.pop();
    }
    
    int top() {
        return stack1.top();
    }
    
    int getMin() {
        return minstack.top();
    }
};
