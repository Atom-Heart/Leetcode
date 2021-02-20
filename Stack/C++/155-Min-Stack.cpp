class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {

    }
    
    void push(int x) {
        st1.push(x);
        if(st2.empty()){
            st2.push(x);
        }
        else{
            if(st2.top() < x){
                st2.push(st2.top());
            }
            else{
                st2.push(x);
            }
        }
    }
    
    void pop() {
        st1.pop();
        st2.pop();
    }
    
    int top() {
        return st1.top();
    }
    
    int getMin() {
        return st2.top();
    }
    
    stack<int> st1;
    stack<int> st2;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */