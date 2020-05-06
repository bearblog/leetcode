

非递归后序遍历

```c++
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        vector<int> res;
        TreeNode* cur = root;
        while(cur || !st.empty()) {
            while(cur) {
                st.push(cur->left);
                res.push_back(cur->val);
                cur = cur->right;
            }
            cur = st.top();
            st.pop();     
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
```

