

```c++
class Solution {
public:
    string removeDuplicates(string S) {
        string res ="";
        for(char c : S) {
            if(res.size() && res.back() == c)
                res.pop_back();
            else
                res += c;
        }
        return res;
    }
};
```

