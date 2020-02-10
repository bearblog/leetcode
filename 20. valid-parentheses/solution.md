

```c++
class Solution {
public:

    bool isValid(string s) {
        int len = s.length();
        if (len%2 != 0)
            return false; 

        map<char, char> mappings;
        mappings[')'] = '(';
        mappings[']'] = '[';
        mappings['}'] = '{';

        stack<char> st;
        for (int i=0; i<len; i++) {
            char c = s.at(i);
            if (mappings.find(c) == mappings.end())
                st.push(c);
            else {
                if (st.empty() || st.top() != mappings[c])
                    return false;
                st.pop();
            }
        }
        return st.empty();
    }
};
```

