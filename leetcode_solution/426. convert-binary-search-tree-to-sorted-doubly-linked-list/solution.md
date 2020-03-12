

```c++
class Solution {
private:
void dfs(Node* node, Node* &head, Node* &pre){
    if (!node) return;
    dfs(node->left, head, pre);
    if (!head) {
        head = node;
        pre = node;
    } else {
        pre->right = node;
        node->left = pre;
        pre = node;
    }
    dfs(node->right, head, pre);
}

public:
    Node* treeToDoublyList(Node* root) {
        if(!root) return NULL;
        Node* head = NULL;
        Node* pre = NULL;
        dfs(root, head, pre);
        head->left = pre;
        pre->right = head;
        return head; 
    }
};
```

