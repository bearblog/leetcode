

```c++
class Solution {
public:
    int numComponents(ListNode* head, vector<int>& G) {
        unordered_set s(G.begin(), G.end());
        int count=0;
        while(head->next){
            auto cur = s.find(head->val);
            bool cur_flag = (cur!=s.end());
            auto next = s.find(head->next->val);
            bool next_flag = (next!=s.end());
            if (cur_flag && (!next_flag)) {
                count++;
            }
            head = head->next;
        }
        auto it = s.find(head->val);
        bool flag = (it!=s.end());
        if (flag) count++;
        return count;
    }
};
```

