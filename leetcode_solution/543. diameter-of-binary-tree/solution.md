

```c++
class Solution {
private:
    int res = 0;

    int findMaxLen(TreeNode* root) {
        if (!root) return 0;

        int left = findMaxLen(root->left);
        int right = findMaxLen(root->right);
        res = max(res, left+right);
        return max(left, right) + 1;
    }

public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        findMaxLen(root);
        return res;
    }
};
```

