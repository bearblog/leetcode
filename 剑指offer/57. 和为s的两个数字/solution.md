

```c++
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        set<int> record;
        for (int i = 0; i < nums.size(); i++) {
            int com = target - nums[i];
            if (record.find(com) != record.end())
                return {com, nums[i]};
            record.insert(nums[i]);
        }
        return {};
    }
};
```

