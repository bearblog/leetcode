

```c++
class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode* tmp_head = new ListNode(-1);
        tmp_head->next = head;
        ListNode* slow = tmp_head;
        ListNode* fast = tmp_head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* right = reverseList(slow->next);
        slow->next = NULL;

        ListNode* ptr = head;
        while(right) {
            ListNode* tmp = ptr->next;
            ptr->next = right;
            right = right->next;
            ptr->next->next = tmp;
            ptr = tmp;
        }
    }

    ListNode* reverseList(ListNode* head) {
        ListNode* pre = NULL;
        ListNode* next = NULL;
        ListNode* ptr = head;
        while(ptr) {
            next = ptr->next;
            ptr->next = pre;
            pre = ptr;
            ptr = next;
        }
        return pre;
    }

};
```

