```c++
class Solution {
private:
    set<int> record;
    bool find(TreeNode* root, int k) {
        if (!root) return false;
        if (record.find(k - root->val) != record.end()) return true;
        record.insert(root->val);
        return find(root->left, k) || find(root->right, k);
    }
public:
    bool findTarget(TreeNode* root, int k) {
        return find(root, k);
    }
};
```

