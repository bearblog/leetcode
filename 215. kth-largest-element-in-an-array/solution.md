

```c++
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> res;
        for (int i=0; i<nums.size(); i++) {
            if (i<k)
                res.push(nums[i]);
            else if(nums[i]>res.top()) {
                res.pop();
                res.push(nums[i]);
            }
        }
          
        return res.top();
    }
};
```

