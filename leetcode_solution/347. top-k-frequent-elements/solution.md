

```c++
class Solution {
    typedef pair<int, int> data;
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        priority_queue<data, vector<data>, greater<data>> heap;
        vector<int> res;

        for (int num: nums) 
            map[num]++;

        for (auto item:map) {
            heap.push(make_pair(item.second, item.first));
            if(heap.size() > k)
                heap.pop();
        }

         while (!heap.empty()) {
            res.push_back(heap.top().second);
            heap.pop();
         }

         return res;
    }
};
```

