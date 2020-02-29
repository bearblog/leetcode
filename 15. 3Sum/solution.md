

```c++
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        if(nums.size() < 3) return res;
        int n = nums.size();
        
        sort(nums.begin(), nums.end());
        
        for (int i=0; i<nums.size()-2; i++) {
            if (nums[i]>0) return res;
            if (i>0 and nums[i] == nums[i-1]) continue;

            int left = i+1;
            int right = n-1;

            while(left < right) {
                if (nums[i]+nums[left]+nums[right]==0){
                    vector<int> tmp;
                    tmp.push_back(nums[i]);
                    tmp.push_back(nums[left]);
                    tmp.push_back(nums[right]);
                    res.push_back(tmp);
                    while(left<right && nums[left]==nums[left+1])
                        left++;
                    while(left<right && nums[right]==nums[right-1])
                        right--;
                    left++;
                    right--;
                } else if (nums[i]+nums[left]+nums[right]>0)
                    right--;
                else
                    left++;
            }
        }
        return res;
    }
};
```

