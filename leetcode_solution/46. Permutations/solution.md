

```c++
class Solution {
public:
    void dfs(vector<vector<int>>& res, vector<int>& output, int idx) {
        int len = output.size();
        if (idx == len) {
            res.emplace_back(output);
            return;
        }
        for (int i = idx; i < len; i++) {
            swap(output[i], output[idx]);
            dfs(res, output, idx + 1);
            swap(output[i], output[idx]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        dfs(res, nums, 0);
        return res;
    }
};
```

