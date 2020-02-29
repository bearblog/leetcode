

```c++
class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
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
            if(res.size() == k)
                return cur->val;
            cur = cur->right;
        }
        return -1;
    }
};
```

