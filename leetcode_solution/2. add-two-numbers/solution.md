

```c++
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0);
        ListNode* tail = head;
        int sum = 0;
        while(l1 || l2 || sum) {
            sum += (l1 ? l1->val : 0) + (l2 ? l2->val : 0);
            tail->next = new ListNode(sum % 10);
            l1 = l1 ? l1->next : NULL;
            l2 = l2 ? l2->next : NULL;
            tail = tail->next;
            sum /= 10;
        }
        return head->next;
    }
};
```

