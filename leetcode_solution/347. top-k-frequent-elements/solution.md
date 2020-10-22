题目：https://leetcode-cn.com/problems/top-k-frequent-elements/

优先队列-小顶堆



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
		 reverse(res.begin(), res.end());
         return res;
    }
};
```

