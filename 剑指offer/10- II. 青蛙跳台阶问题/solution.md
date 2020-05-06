

```c++
class Solution {
public:
    int numWays(int n) {
        if (n < 2) return 1;
        int a = 1, b = 1;
        int res;
        for (int i = 0; i < n-1; i++) {
            res = (a + b) % 1000000007;
            a = b;
            b = res;
        }
        return res;
    }
};
```

