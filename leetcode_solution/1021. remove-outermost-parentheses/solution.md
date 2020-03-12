

```c++
class Solution {
public:
    string removeOuterParentheses(string S) {
        int L = 1;
        int R = 0;
        string ans;
        for (int i = 1; i < S.size(); i++) {
            if(S[i]=='(')
                L++;
            else
                R++;
            if (R!=L)
                ans.push_back(S[i]);
            else{
                i++;
                L=1;
                R=0;
            }
        }
        return ans;
    }
};
```

