

```c++
private:
    int maxSinglePath(TreeNode* root, int &val) {
        if (!root) return 0;
        int left = max(maxSinglePath(root->left, val), 0);
        int right = max(maxSinglePath(root->right, val), 0);

        int lmr = root->val + left + right;
        val = max(val, lmr);
    return root->val + max(left, right);
    }
public:
    int maxPathSum(TreeNode* root) {
        int val = INT_MIN;
        maxSinglePath(root, val);
        return val;
    }
};
```

