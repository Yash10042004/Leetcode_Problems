class MinStack {
public:
     stack<int>st;
     int topele=-1;
     vector<int>k={INT_MAX};
     MinStack() {
        
    }
    
    void push(int val) {
        if(val<=k.back()) k.push_back(val);
        st.push(val);
    }
    
    void pop() {
        if(!st.empty()){
          if(st.top()==k.back()) 
                k.pop_back();
         st.pop();
        
        } 
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        
        return k.back();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */