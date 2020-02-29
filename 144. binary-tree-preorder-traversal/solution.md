

```c++
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        vector<int> res;
        TreeNode* cur = root;
        while(cur || !st.empty()) {
            while (cur) {
                res.push_back(cur->val);
                st.push(cur->right);
                cur = cur->left;
            }
            cur = st.top();
            st.pop();
        }
        return res;
    }
};
```

