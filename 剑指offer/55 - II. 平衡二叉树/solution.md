

```c++
class Solution {
private:
int depth(TreeNode* root) {
    if (root == NULL) return 0;
    int left = depth(root->left);
    if (left == -1) return -1;
    int right = depth(root->right);
    if (right == -1) return -1;
    return abs(left - right) < 2 ? max(left, right) + 1 : -1;
}

public:
    bool isBalanced(TreeNode* root) {
        return depth(root) != -1;
    }
};
```

