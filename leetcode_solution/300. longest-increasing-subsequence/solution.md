时间复杂度$O(n^2)$

```c++
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        if (n<2) return n;
        vector<int> dp(n, 0);
        dp[0] = 1;
        int res = 1;
        for (int i = 1; i < n; i++) {
            dp[i] = 1;
            for (int j = 0; j < i; j++){
                if(nums[i]>nums[j] && dp[i] < dp[j] + 1)
                    dp[i] = dp[j] + 1;
            }
            res = max(res, dp[i]);
        }
        return res;
    }
};
```



贪心+二分会使计算复杂度降到