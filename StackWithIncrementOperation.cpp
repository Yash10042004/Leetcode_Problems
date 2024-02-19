class CustomStack {
public:
int* stack;
int n,top=-1;
    
     CustomStack(int maxSize) {
          stack=new int[maxSize];
          n=maxSize;
    }
    
    void push(int x) {
        if(top != n-1)
          stack[++top]=x;
        
    }
    
    int pop() {
        if(top==-1)
          return -1;

        return stack[top--];
        
    }
    
    void increment(int k, int val) {
        if(k<=top+1){
          for(int i=0;i<k;i++)
            stack[i]+=val;
        }
        else{
             for(int i=0;i<=top;i++)
               stack[i]+=val; 
        } 
        
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */