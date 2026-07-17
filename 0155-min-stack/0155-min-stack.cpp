class MinStack {
    stack<int> st;
    stack<int> min_track;
public:
    MinStack() {
        
    }
    
    void push(int value) {
        st.push(value);
        if(min_track.empty()){
            min_track.push(value);
        }
        else{
            min_track.push(min(value,min_track.top()));
        }
        
    }
    
    void pop() {
        st.pop();
        min_track.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return min_track.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */