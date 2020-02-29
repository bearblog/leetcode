

```c++
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> record;
        for (int i=0; i<nums.size(); i++){
            int com = target - nums[i];
            if (record.find(com) != record.end())
                return {record[com], i};
            record[nums[i]] = i;
        }
        return {};
    }
};
```

