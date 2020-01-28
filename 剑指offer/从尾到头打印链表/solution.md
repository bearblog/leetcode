```c++
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> result;
        if (!head) return result;
        ListNode* pre = NULL;
        while(head) {
            ListNode* next = head->next;
            head->next = pre;
            pre = head;
            head = next;
        }
        while (pre) {
            result.push_back(pre->val);
            pre = pre->next;
        }
        return result;
    }
};
```

