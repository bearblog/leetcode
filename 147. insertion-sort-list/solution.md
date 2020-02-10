

```c++
class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        if (!head) return head;
        ListNode* tmp_head = new ListNode(-1);
        tmp_head->next = head;
        ListNode* pre = tmp_head;
        ListNode* tail = head;
        ListNode* curr = head->next;
        ListNode* next = NULL;
        while(curr) {
            next = curr->next;
            pre = tmp_head;
            while (pre != tail && pre->next->val < curr->val) {
                pre = pre->next;
            }
            if (pre != tail){
                curr->next = pre->next;
                pre->next = curr;
                tail->next = next;
            } else {
                tail = curr;
            }
            curr = next;
        }
        return tmp_head->next;
    }
};
```

