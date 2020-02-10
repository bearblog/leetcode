

```c++
class Solution {
public:
    int getv(string &s) {
        int ans = 0;
        if (s[0] == '-') {
            for(int i=1; i< s.size(); i++)
                ans = ans * 10 + s[i] - '0';
            return -ans;
        } else {
            for (auto v:s) ans = ans * 10 + v - '0';
            return ans;
        }
    }

    int calc(int a, int b, char op) {
        if (op == '+') return a+b;
        else if (op == '-') return a-b;
        else if (op == '*') return a*b;
        else return a/b;
    }

    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (auto s : tokens) {
            if(s[0]>='0' && s[0]<='9' || s[0]=='-' && s.size()>1) 
                st.push(getv(s));
            else {
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();
                st.push(calc(a, b, s[0]));
            }
        }
        return st.top();
    }
};
```

