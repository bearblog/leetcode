

```c++
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if (!head || !head->next) return head;
        ListNode* slow = head;
        ListNode* fast = head->next;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* tmp = slow->next;
        slow->next = NULL;
        ListNode* left = sortList(head);
        ListNode* right = sortList(tmp);
        ListNode* tmp_head = new ListNode(-1);
        ListNode* ptr = tmp_head;
        while (left && right) {
            if (left->val < right->val) {
                ptr->next = left;
                left = left->next;
            } else {
                ptr->next = right;
                right = right->next;
            }
            ptr = ptr->next;
        }
        ptr->next = (left==NULL) ? right : left;
        return tmp_head->next;
    }
};
```

