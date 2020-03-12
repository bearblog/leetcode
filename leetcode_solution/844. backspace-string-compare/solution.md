

```c++
class Solution {
public:
    stack<char> backspace (string S) {
        stack<char> st;
        for (auto s : S) {
            if (s == '#'){
                if (!st.empty())
                    st.pop();
            }
            else
                st.push(s);
        } 
        return st;
    }

    bool backspaceCompare(string S, string T) {
        stack<char> st_s = backspace(S);
        stack<char> st_t = backspace(T);
        while(!st_s.empty() && !st_t.empty()) {
            if (st_s.top() != st_t.top()) 
                return false;
            st_s.pop();
            st_t.pop();
        }
        if (st_s.empty() && st_t.empty())
            return true;
        else    
            return false;
    }
};
```

