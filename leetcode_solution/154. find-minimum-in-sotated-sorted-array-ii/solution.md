

```c++
class Solution {
public:
    int findMin(vector<int>& nums) {
        if (nums.size()<1) return 0;
        int i = 0;
        int j = nums.size()-1; 
        int mid;
        while (i<j) {
            if (nums[i] < nums[j]) return nums[i];
            mid = (i + j) / 2;
            if (nums[mid] > nums[i])
                i = mid + 1;
            else if (nums[mid] < nums[i])
                j = mid;
            else
                i++;
        }
        return nums[i];
    }
};
```

