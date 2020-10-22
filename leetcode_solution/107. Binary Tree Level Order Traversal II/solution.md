

```c++
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ret;
        if (!root) return ret;

        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            int currLevelSize = q.size();
            ret.push_back(vector<int> ());
            for (int i = 0; i < currLevelSize; i++) {
                TreeNode* node = q.front();
                q.pop();
                ret.back().push_back(node->val);
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
        }
        reverse(ret.begin(), ret.end());
        return ret;
    }
};
```

