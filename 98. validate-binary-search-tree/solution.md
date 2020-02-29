#  leetcode 98 Validate Binary Search Tree

链接：https://leetcode-cn.com/problems/validate-binary-search-tree/

# 解法一：

```c++
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return isValid(root, LONG_MIN, LONG_MAX);
    }

    bool isValid(TreeNode* node, long lower, long upper) {
        if (node==NULL) return true;
        return  lower < node->val && node->val < upper && isValid(node->right, node->val, upper) && isValid(node->left, lower, node->val);
    }
};
```

