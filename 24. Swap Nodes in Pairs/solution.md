

```C++
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* tmp_head = new ListNode(-1);
        tmp_head->next = head;
        ListNode* pre = tmp_head;
        ListNode* next = NULL;
        ListNode* first = NULL;
        ListNode* second = NULL;
        while (pre->next && pre->next->next){
            first = pre->next;
            second = pre->next->next;
            next = second->next;
            pre->next = second;
            second->next = first;
            first->next = next;
            pre = first;
        }
        return tmp_head->next;
    }
};
```

