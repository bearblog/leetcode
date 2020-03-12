

```c++
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (!head) return NULL;
        ListNode* tmp = new ListNode(0);
        tmp->next = head; 
        ListNode* pre = tmp; 
        while (head) {
            if (head->val == val) {
                pre->next = head->next;
            } else {
                pre = pre->next;
            }
            head = head->next;
        }
        return tmp->next;
    }
};
```

