

```c++
class Solution {
public:
    ListNode* EntryNodeOfLoop(ListNode* pHead)
    {
        ListNode* slow = pHead;
        ListNode* fast = pHead;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if(fast == slow){
                fast = pHead;
                while (fast!=slow) {
                    fast = fast->next;
                    slow = slow->next;
                }
                return fast;
            }
        }
        return NULL;
    }
};
```

