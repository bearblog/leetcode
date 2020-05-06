```c++
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max_id = 0;
        int max_value = 0;
        int second_max_value = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > max_value) {
                if (i != 0)
                    second_max_value = max_value;
                max_value = nums[i];
                max_id = i;
            } else if (nums[i] > second_max_value) {
                second_max_value = nums[i];
            }
        }
        if (max_value >= 2 * second_max_value)
            return max_id;
        else
            return -1;
    }
};
```

