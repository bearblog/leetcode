

```c++
class MyQueue {
private:
    stack<int> in;
    stack<int> out;

    void in2out() {
        if (out.empty()) {
            while (!in.empty()) {
                int tmp = in.top();
                in.pop();
                out.push(tmp);
            }
        }
    }

public:
    /** Initialize your data structure here. */
    MyQueue() {

    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        in.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int res = peek();
        out.pop();
        return res;
    }
    
    /** Get the front element. */
    int peek() {
        in2out();
        return out.top();
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return in.empty() && out.empty();
    }
};
```

