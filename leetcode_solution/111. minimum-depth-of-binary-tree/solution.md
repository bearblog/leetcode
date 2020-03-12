

```c++
class Solution {
public:
    int minDepth(TreeNode* root) {
        if (!root) return 0;
        int left_depth = minDepth(root->left);
        int right_depth = minDepth(root->right);
        return !root->left || !root->right ? left_depth + right_depth + 1 : min(left_depth, right_depth)+1; 
    }
};
```

