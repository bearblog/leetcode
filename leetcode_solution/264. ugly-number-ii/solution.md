

```c++
class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> dp;
        dp.push_back(1);
        int p2=0, p3=0, p5=0, ugly;
        for (int i = 1; i < n; i++) {
            ugly = min(min(2*dp[p2], 3*dp[p3]), 5*dp[p5]);
            if (ugly == 2*dp[p2]) p2++;
            if (ugly == 3*dp[p3]) p3++;
            if (ugly == 5*dp[p5]) p5++;
            dp.push_back(ugly);
        }
        return dp[n-1];
    }
};
```

