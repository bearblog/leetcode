

```c++
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, 0);
        dp[0] = nums[0];
        int res = dp[0];
        for (int i = 1; i < n; i++) {
            dp[i] = max(dp[i-1]+nums[i], nums[i]);
            if (dp[i] > res)
                res = dp[i];
        }
        return res;
    }
};
```

