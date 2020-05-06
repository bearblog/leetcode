

```c++
private:
    void dfs(TreeNode* root, int target, vector<int> &path, vector<vector<int>> &result) {
        if (!root) return;
        path.push_back(root->val);
        target -= root->val;
        if (!target && !root->left && !root->right)
            result.push_back(path);
        dfs(root->left, target, path, result);
        dfs(root->right, target, path, result);
        path.pop_back();
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<int> path;
        vector<vector<int>> result;
        dfs(root, sum, path, result);
        return result;
    }
};
```

