

```c++
class MinStack {
private:
    stack<int> dataStack;
    stack<int> minStack;
    int minVal;

public:
    /** initialize your data structure here. */
    MinStack() {
        minVal = INT_MAX;
    }
    
    void push(int x) {
        dataStack.push(x);
        minVal = min(minVal, x);
        minStack.push(minVal);
    }
    
    void pop() {
        dataStack.pop();
        minStack.pop();
        minVal = minStack.empty() ? INT_MAX : minStack.top();
    }
    
    int top() {
        return dataStack.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};
```

