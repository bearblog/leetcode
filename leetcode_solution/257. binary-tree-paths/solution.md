```c++
class Solution {
private:
    vector<int> path;
    vector<string> result;
    void dfs(TreeNode* root) {
        if (!root) return;
        path.push_back(root->val);
        if (!root->left and !root->right){
            string tmp = to_string(path[0]);
            for (int i=1; i<path.size(); i++) {
                tmp += "->" + to_string(path[i]);
            }
            result.push_back(tmp);
        }
        dfs(root->left);
        dfs(root->right);
        path.pop_back();
    }

public:
    vector<string> binaryTreePaths(TreeNode* root) {
        dfs(root);
        return result;
    }
};
```

