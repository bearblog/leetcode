

```c++
class Solution {
private:
    void dfs(TreeNode* root, int sum, int &res) {
        if (!root) return;
        sum = sum * 10 + root->val;
        if (!root->left && !root->right) {
            res += sum;
        }
        dfs(root->left, sum, res);
        dfs(root->right, sum, res);
    }
public:
    int sumNumbers(TreeNode* root) {
        int sum = 0, res = 0;
        dfs(root, sum, res);
        return res;
    }
};
```

