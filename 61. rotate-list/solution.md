

```c++
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || k==0) return head;
        int count = 0;
        ListNode* slow = head;
        ListNode* fast = head;
        while (slow) {
            slow = slow->next;
            count++;
        }
        k %= count;
        if (k==0)
            return head;
        slow = head;
        while (k) {
            fast = fast->next;
            k--;
        }
        while (fast->next) {
            slow = slow->next;
            fast = fast->next;
        }
        ListNode* result = slow->next;
        fast->next = head;
        slow->next = NULL;
        return result;
    }
};
```

