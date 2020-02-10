堆（Heap）是一种重要的数据结构，是实现优先队列的首选的数据结构。堆是一颗满足一定性质的二叉树，并有如下特性：父节点的键值总是不大于他孩子节点的键值（**小顶堆**），堆可以分为大顶堆和小顶堆。



```c++
class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        int len = input.size();
        vector<int> res;
        if(len == 0 || k <= 0 || len < k)
            return res;
        for (int i = 0; i < k; i++) 
            res.push_back(input[i]);
        make_heap(res.begin(), res.end());
        for (int i = k; i < len; i++) {
            if (input[i] > res.front())
                continue;
            else
            {
                res.push_back(input[i]);
                // 添加新的元素，并调整堆
                push_heap(res.begin(), res.end());
                // 将堆的顶点元素移到最后，并调整其他元素成堆
                pop_heap(res.begin(), res.end());
                res.pop_back();
            }
        }
        sort_heap(res.begin(), res.end());
        return res;
    }
};
```

