

```c++
class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        if (!head) return NULL;

        ListNode* mid = findMiddleElement(head);
        TreeNode* node = new TreeNode(mid->val);

        if (head == mid)
            return node;

        node->left = sortedListToBST(head);
        node->right = sortedListToBST(mid->next);
        return node;
    }

    ListNode* findMiddleElement(ListNode* head) {
        ListNode* pre = NULL;
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast && fast->next) {
            pre = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        if (pre)
            pre->next = NULL;
        return slow;
    }
};
```

