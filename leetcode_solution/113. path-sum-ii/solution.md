

```c++
class Solution {
private:
    vector<int> path;
    vector<vector<int>> result;
    void dfs(TreeNode* root, int target) {
        if (!root) return;
        path.push_back(root->val);
        target -= root->val;
        if (!target && !root->left && !root->right)
            result.push_back(path);
        dfs(root->left, target);
        dfs(root->right, target);
        path.pop_back();
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        dfs(root, sum);
        return result;
    }
};
```

