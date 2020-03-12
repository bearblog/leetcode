

```c++
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result;
        result.push_back(leftBound(nums, target));
        result.push_back(rightBound(nums, target));
        return result;
    }

    int leftBound(vector<int>& nums, int target) {
        int begin = 0;
        int end = nums.size()-1;
        while(begin<=end) {
            int mid = (begin+end)/2;
            if(nums[mid]==target){
                if(mid==0 || target > nums[mid-1]) {
                    return mid;
                }
                end = mid-1;
            } else if (target < nums[mid]) {
                end = mid -1;
            } else if (target > nums[mid]) {
                begin = mid+1;
            }
        }
        return -1;
    }

    int rightBound(vector<int>& nums, int target) {
        int begin = 0;
        int end = nums.size()-1;
        while(begin<=end) {
            int mid = (begin+end)/2;
            if(nums[mid]==target){
                if(mid==nums.size()-1 || target < nums[mid+1]) {
                    return mid;
                }
                begin = mid+1;
            } else if (target < nums[mid]) {
                end = mid -1;
            } else if (target > nums[mid]) {
                begin = mid+1;
            }
        }
        return -1;
    }
};
```

