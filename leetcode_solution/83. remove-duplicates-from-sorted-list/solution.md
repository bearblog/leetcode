

```c++
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head)  return head;
        ListNode* cur = head;
        ListNode* ptr = head->next;
        while (ptr) {
            if (ptr->val != cur->val) {
                cur->next = ptr;
                cur = ptr;
            }

            if (!ptr->next) {
                cur->next = ptr->next;
            }

            ptr = ptr->next;
        }
        return head;
    }
};
```

