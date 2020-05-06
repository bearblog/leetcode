

```c++
class CQueue {
    stack<int> stack1;
    stack<int> stack2;

public:
    CQueue() {

    }
    
    void appendTail(int value) {
        stack1.push(value);
    }
    
    int deleteHead() {
        if (stack1.empty() && stack2.empty()) return -1;
        if (stack2.empty()) {
            int num;
            while (!stack1.empty()) {
                num = stack1.top();
                stack1.pop();
                stack2.push(num);
            }
        }
        int result = stack2.top();
        stack2.pop();
        return result;
    }
};
```

