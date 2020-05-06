

```c++
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        if (n<2) return n;
        unordered_set<char> lookup;
        lookup.insert(s[0]);
        int res = 1;
        int left = 0;
        for (int i = 1; i < n; i++) {
            while (lookup.find(s[i]) != lookup.end()) {
                lookup.erase(s[left]);
                left++;
            }
            res = max(res, i-left+1);
            lookup.insert(s[i]);
        }
        return res;
    }
};
```

