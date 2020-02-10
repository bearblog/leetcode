

```c++
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) return head;
        ListNode* tmp_head = new ListNode(-1);
        tmp_head->next = head;
        ListNode* pre = tmp_head;
        ListNode* head_node = pre->next;
        ListNode* tail_node = pre->next->next;
        int flag = false;
        while(tail_node){
            if(tail_node->val == head_node->val) {
                while(tail_node && tail_node->val == head_node->val){
                    tail_node=tail_node->next;
                }
                pre->next = tail_node;
                head_node = tail_node;
                if(tail_node)
                    tail_node = tail_node->next;
            } else {
                pre = pre->next;
                head_node = head_node->next;
                tail_node = tail_node->next;
            }
        }
        return tmp_head->next;
    }
};
```

