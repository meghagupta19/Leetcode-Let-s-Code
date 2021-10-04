class MinStack {
    stack<int>s;
    stack<int>s2;
    stack<int>s3;
public:
    MinStack() {        
    }
    
    void push(int val) {
        s.push(val);        
        if(s2.empty())
            s2.push(val);
        else
        {
            if(val>s2.top())
            {
                while(val<s2.top()||s2.empty())
                {
                s3.push(s2.top());
                s2.pop(); 
                }
                while(!s3.empty())
                {
                    s2.push(s3.top());
                    s3.pop();
                }
            }
            else{
                s2.push(val);
            }
        }
    }
    
    void pop() {  
        if(s.top()==s2.top())
            s2.pop();
    if(s.empty()) return; 
    else  s.pop();
        
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return s2.top();
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