// Stack class.
class Stack {
    
public:
    int capacity;
    int top1;
    int *arr;

    
    Stack(int capacity) {
        // Write your code here.
        this->capacity=capacity;
        arr=new int[capacity];
        
        top1=-1;
        
        
        
    }

    void push(int num) {
        // Write your code here.
        if(capacity-top1>1){
            top1++;
            arr[top1]=num;
        }
        else
            return ;
        
        
    }
    
    int pop() {
        // Write your code here.
        if(top1==-1){
            return -1;
        }
        else
            int result=arr[top1];
            
            top1--;
            return result;
    }
    
    int top() {
        // Write your code here.
        if(top1==-1){
            return -1;
        }
        else
            return arr[top1];
    }
    
    int isEmpty() {
        // Write your code here.
        if(top1==-1){
            return 1;
        }
        else
            return 0;
    }
    
    int isFull() {
        // Write your code here.
        if (top1 == capacity-1) {
            return 1;
        } else {
            return 0;
        }
    }
};
