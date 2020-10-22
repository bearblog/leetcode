```c++
class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        int N = stations.size();
        vector<long> dp(N+1, 0);
        dp[0] = startFuel;
        for (int i = 0; i < N; i++) {
            for (int j = i; j >= 0; j--) {
                if (dp[j] >= stations[i][0]) {
                    dp[j+1] = max(dp[j+1], dp[j] + stations[i][1]);
                }
            }
        }

        for (int i = 0; i <= N; i++) {
            if (dp[i] >= target) return i;
        }
        return -1;
    }
};
```

