

```c++
class Solution {
public:
    string decodeString(string s) {
        stack<int> st_multi;
        stack<string> st_res;
        int multi = 0;
        string res;
        for (auto c : s) {
            if (c=='[') {
                st_res.push(res);
                st_multi.push(multi);
                res = "";
                multi = 0;
            } else if (c==']') {
                for (int j = 0; j < st_multi.top(); j++)
                    st_res.top() += res;
                st_multi.pop();
                res = st_res.top();
                st_res.pop();
            } else if (c >= '0' && c <= '9')
                multi = multi * 10 + c - '0'; 
            else 
                res.push_back(c);
        }
        return res;
    }
};
```

