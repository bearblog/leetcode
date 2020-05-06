

Boyer-Moore投票法

```c++
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1, res=nums[0];   
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == res)
                count++;
            else if (--count == 0) {
                res = nums[i];
                count = 1;
            }
        }
        return res;
    }
};
```

