# LeetCode 100 Same Tree

链接：https://leetcode-cn.com/problems/same-tree/



## 解法一

```c++
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p||!q) return !p&&!q;
        return p->val==q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};
```

