

```c++
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        string res = strs[0];
        for (auto str:strs) {
            int i =0;
            for (; i<min(res.size(), str.size()); i++){
                if(res[i] != str[i])
                    break;
            }
            res = res.substr(0,i);
            if (res.empty()) return "";
        }
        return res;
    }
};
```

