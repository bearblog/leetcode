

```c++
class Solution {
public:
    RandomListNode* Clone(RandomListNode* pHead)
    {
        map<RandomListNode*, int> node_map;
        vector<RandomListNode*> node_vec;
        RandomListNode* ptr = pHead;
        int i=0;
        while(ptr) {
            node_map[ptr] = i;
            node_vec.push_back(new RandomListNode(ptr->label));
            ptr = ptr->next;
            i++;
        }
        node_vec.push_back(0);
        ptr=pHead;
        i=0;
        while(ptr) {
            node_vec[i]->next = node_vec[i+1];
            if(ptr->random) {
                int id = node_map[ptr->random];
                node_vec[i]->random = node_vec[id];
            }
            ptr = ptr->next;
            i++;
        }
        return node_vec[0];
    }
};
```

