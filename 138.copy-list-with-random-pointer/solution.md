未通过

```c++
class Solution {
public:
    Node* copyRandomList(Node* head) {
        map<Node*, int> node_map;
        vector<Node*> node_vec;
        Node* ptr = head;
        int i;
        while(ptr) {
            node_map[ptr] = i;
            node_vec.push_back(new Node(ptr->val));
            ptr = ptr->next;
            i++;
        }
        i = 0;
        ptr = head;
        while (ptr) {
            if (i != node_vec.size()-1)
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

