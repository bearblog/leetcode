

```c++
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (!l1 || !l2) return l1 ? l1 : l2;
        ListNode *head = new ListNode(-1);
        ListNode *tail = head, *l1Ptr = l1, *l2Ptr = l2;
        while(l1Ptr && l2Ptr) {
            if (l1Ptr->val < l2Ptr->val) {
                tail->next = l1Ptr;
                l1Ptr = l1Ptr->next;
            } else {
                tail->next = l2Ptr;
                l2Ptr = l2Ptr->next;
            }
            tail = tail->next;
        }
        tail->next = l1Ptr ? l1Ptr : l2Ptr;
        return head->next;
    }
};
```

