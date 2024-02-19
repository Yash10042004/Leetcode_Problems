class MyCircularQueue {
public:int count=0;
       int *queue=NULL;
       int front=0;
       int rear=-1;
       int n;
    MyCircularQueue(int k) {
        queue=new int[k];
        n=k;
        
    }
    
    bool enQueue(int value) {
        if(count==n)
          return false;
       rear=(rear+1)%n;
       queue[rear]=value;
       count++;
       return true;
       
    }
    
    bool deQueue() {
        if(count==0)
            return false;
        front=(front+1)%n;
        count--;
            return true;
        
    }
    
    int Front() {
        if(count==0)
         return -1;
        return queue[front];
    }
    
    int Rear() {
        if(count==0)
         return -1;
        return queue[rear];
    }
    
    bool isEmpty() {
        return count==0;
    }
    
    bool isFull() {
        return count==n;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */