class MinStack {

private:
    std::vector<int> stack;
    std::vector<int> min_stack; 
    int size;

public:
    MinStack() {
        size = 0;
    }
    
    void push(int val) {
        stack.push_back(val);
        
        if (size == 0) {
            min_stack.push_back(val);
        } else {
            min_stack.push_back(min(val, min_stack[size - 1]));
        }
        
        size++;
    }
    
    void pop() {
        stack.pop_back();
        min_stack.pop_back();
        size--;
    }
    
    int top() {
        if(size > 0){
            return stack[size-1];
        }
        else{
            return 0;
        }
    }
    
    int getMin() {
        if(size > 0){
            return min_stack[size-1]; 
        }
        else{
            return 0;
        }
    }
};