

```c++
class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        set<int> cur_set;
        for (auto num : nums) {
            if (cur_set.find(num) != cur_set.end())
                return num;
            cur_set.insert(num);
        }
        return -1;
    }
};
```

