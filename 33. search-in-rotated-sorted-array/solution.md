

```c++
class Solution {
public: 
	int search(vector<int>& nums, int target) {
	int lo = 0, hi = nums.size()-1;
	while (lo < hi) {
		int mid = (lo+hi)/2;
		if((nums[0]>mid) ^ (target<nums[0]) ^ (target>nums[mid]))
			lo = mid + 1;
		else
			hi = mid;
	}
	return lo == hi &&  nums[lo] == ? lo : -1;
	}
}
```



小象解法

```c++
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int begin = 0;
        int end= nums.size()-1;
        while (begin <= end) {
            int mid = (begin + end) / 2;
            if (target==nums[mid]) {
                return mid;
            } else if (target < nums[mid]) {
                if (nums[begin] < nums[mid]) {
                    if (target > nums[begin]){
                        end = mid - 1;
                    } else if (target < nums[begin]) {
                        begin = mid + 1;
                    } else {
                        return begin;
                    }
                } else if (nums[begin] > nums[mid]){
                    end = mid - 1;
                } else if (nums[begin] == nums[mid]) {
                    begin = mid+1;
                }
            } else if (target > nums[mid]) {
                if (nums[begin] > nums[mid]) {
                    if (target > nums[begin]) {
                        end = mid - 1;
                    } else if(target < nums[begin]){
                        begin = mid + 1;
                    } else {
                        return begin;
                    }
                } else if (nums[begin] < nums[end]) {
                    begin = mid + 1;
                } else {
                    begin = mid + 1;
                }
            }
        }
        return -1;
    }
};
```

