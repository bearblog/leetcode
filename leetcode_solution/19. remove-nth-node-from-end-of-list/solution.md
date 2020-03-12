

```c++
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* tmp_head = new ListNode(-1);
        tmp_head->next = head;
        ListNode* slow = tmp_head;
        ListNode* fast = tmp_head;
        while(n+1) {
            fast = fast->next;
            n--;
        }
        while(fast) {
            slow = slow->next;
            fast = fast->next;
        }
        slow->next = slow->next->next;
        return tmp_head->next;
    }
};
```

