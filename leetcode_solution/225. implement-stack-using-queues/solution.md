# 解法一：单队列实现栈

```c++
class MyStack {
private:
    queue<int> q;

public:
    /** Initialize your data structure here. */
    MyStack() {

    }
    
    /** Push element x onto stack. */
    void push(int x) {
        q.push(x);
        int count = q.size();
        while (count-- > 1) {
            int tmp = q.front();
            q.pop();
            q.push(tmp);
        }
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int res = q.front();
        q.pop();
        return res;
    }
    
    /** Get the top element. */
    int top() {
        return q.front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return q.empty();
    }
};
```



# 解法二：双队列实现栈

```c++
class MyStack {
private:
    queue<int> q1;
    queue<int> q2;
    int s_top;
public:
    /** Initialize your data structure here. */
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        q1.push(x);
        s_top = x;
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        while(q1.size() > 1) {
            s_top = q1.front();
            q1.pop();
            q2.push(s_top);
        }
        int tmp_top = q1.front();
        q1.pop();
        queue<int> tmp = q1;
        q1 = q2;
        q2 = tmp;
        return tmp_top;
    }
```

