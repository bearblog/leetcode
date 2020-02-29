

```c++
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode lessHead(0);
        ListNode moreHead(0);
        ListNode* lessptr = &lessHead;
        ListNode* moreptr = &moreHead;
        while (head) {
            if (head->val < x) {
                lessptr->next = head;
                lessptr = head;
            } else {
                moreptr->next = head;
                moreptr = head;
            }
            head = head->next;
        }
        lessptr->next = moreHead.next;
        moreptr->next = NULL;
        return lessHead.next;
    }
};
```

