

```c++
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int i = 0, j = n-1;
        char tmp;
        while(i<j) {
            tmp = s[i];
            s[i] = s[j];
            s[j] = tmp;
            i++;
            j--;
        }
    }
};
```

