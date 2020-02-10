

```c++
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        int count = 0;
        ListNode* ptr = head;
        while (ptr) {
            ptr=ptr->next;
            count++;
        } 
        int len = count/2;
        if (count%2 != 0) 
            len += 1;
        ptr = head;
        while(len--) {
            ptr = ptr->next;
        }
        ptr = reverseList(ptr);
        while(ptr) {
            if(head->val!=ptr->val)
                return false;
            head = head->next;
            ptr = ptr->next;
        }
        return true;
    }

    ListNode* reverseList(ListNode* head) {
        ListNode* pre = NULL;
        ListNode* next = NULL; 
        ListNode* curr = head;
        while (curr) {
            next = curr->next;
            curr->next = pre;
            pre = curr;
            curr = next;
        }
        return pre;
    }
};
```

