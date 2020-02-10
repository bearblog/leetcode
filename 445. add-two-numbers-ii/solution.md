

```c++
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* tmp_head = new ListNode(-1);
        l1 = reverseList(l1);
        l2 = reverseList(l2);
        tmp_head->next = l1;
        ListNode* ptr;
        int c = 0;
        int value;
        while (l1 || l2) {
            if (l1 && l2) {
                value = l1->val + l2->val + c;
                ptr = l1; 
            } else if (l1 && !l2) {
                value = l1->val + c;
                ptr = l1;
            } else if (!l1 && l2) {
                value = l2->val + c;
                ptr->next = l2;
                ptr = l2;
            }
            if (value > 9) {
                value %= 10;
                c = 1;
            } else {
                c = 0;
            }
            ptr->val = value;
            if (l1)
                l1 = l1->next;
            if (l2)
                l2 = l2->next;
        }
        if(c==1)
            ptr->next = new ListNode(1);
        return reverseList(tmp_head->next);
    }

    ListNode* reverseList(ListNode* head) {
        ListNode* pre = NULL;
        ListNode* next = NULL;
        ListNode* curr = head;
        while(curr) {
            next = curr->next;
            curr->next = pre;
            pre = curr;
            curr = next;
        } 
        return pre;
    }
};
```

