

```c++
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* tmp = new ListNode(0);
        tmp->next = l1;
        int c = 0;
        int value;
        ListNode* ptr=l1;
        while(l1 || l2){
            if (l1 && l2){
                value = l1->val + l2->val + c;
                ptr = l1;
            } else if (!l1 && l2){
                value = l2->val + c;
                ptr->next = l2;
                ptr = l2;
            } else if (!l2 && l1){
                value = l1->val + c;
                ptr = l1;
            }
            if (value > 9) {
                value %= 10;
                c = 1; 
            } else {
                c = 0;
            }   
            ptr->val = value;
            if(l1)
                l1 = l1->next;
            if(l2)
                l2 = l2->next; 
        }
        if (c==1) {
            ptr->next = new ListNode(1);
        }

        return  tmp->next;
    }
};
```

