

```c++
class Solution {
public:
    int climbStairs(int n) {
        if (n<3) return n;
        int a = 1, b = 2;
        int res;
        for (int i=0; i<n-2; i++){
            res = a + b;
            a = b;
            b = res;
        }
        return res;
    }
};
```

