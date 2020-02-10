

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

    int calPoints(vector<string>& ops) {
        stack<int> st;

        for(auto s : ops) {
            if (s[0] == '+') {
                int top = st.top();
                st.pop();
                int new_top = top + st.top();
                st.push(top);
                st.push(new_top);
            } else if (s[0] == 'C')
                st.pop();
            else if (s[0] == 'D') 
                st.push(2*st.top());
            else 
                st.push(getv(s));
        }

        int ans = 0;
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};
```

