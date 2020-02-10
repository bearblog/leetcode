



```c++
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int len = nums.size();
        int count = 1;
        int result = nums[0];
        for (int i=1; i<len; i++) {
            if (count==0) {
                result = nums[i];
                count = 1;
            } else if (result == nums[i]){
                count++;
            } else {
                count--;
            }
        }
        return result;
    }
};
```

