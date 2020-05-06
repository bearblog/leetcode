```c++
class Solution {
private:
    bool isMirror(TreeNode* n1, TreeNode* n2) {
        if (!n1 && !n2) return true;
        if (!n1 || !n2) return false;

        return (n1->val == n2->val) && isMirror(n1->right, n2->left) && isMirror(n1->left, n2->right);
    }
public:
    bool isSymmetric(TreeNode* root) {
        if (!root) return true;
        return isMirror(root->left, root->right);
    }
};
```

