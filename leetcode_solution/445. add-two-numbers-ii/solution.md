

```c++
class Solution {
private:
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

public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(-1);
        l1 = reverseList(l1);
        l2 = reverseList(l2);
		ListNode* ptr = head;
        int carry = 0, sum = 0;
        while (l1 || l2 || carry) {
            int x = l1 ? l1->val : 0;
            int y = l2 ? l2->val : 0;
            sum = (x + y + carry) % 10;
            carry = (x + y + carry) / 10;
            ptr->next = new ListNode(sum);
            ptr = ptr->next;
            l1 = l1 ? l1->next : NULL;
            l2 = l2 ? l2->next : NULL;
        }
        return reverseList(head->next);
    }
};
```

