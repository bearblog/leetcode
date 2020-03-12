# leetcode 94 Binary Tree Inorder Traversal

链接：https://leetcode-cn.com/problems/binary-tree-inorder-traversal/

## 解法一：递归

```c++
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
    vector<int> result;
    dfs(root, result);
    return result;
    }

    void dfs(TreeNode *root, vector<int> &result){
        if(!root) return;
        dfs(root->left, result);
        result.push_back(root->val);
        dfs(root->right, result);
    }
};
```



## 解法二：非递归

```c++
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        vector<int> res;
        TreeNode* cur = root;
        while(cur || !st.empty()) {
            while(cur) {
                st.push(cur);
                cur = cur->left;
            }
            cur = st.top();
            st.pop();
            res.push_back(cur->val);
            cur = cur->right;
        }
        return res;
    }
};
```

