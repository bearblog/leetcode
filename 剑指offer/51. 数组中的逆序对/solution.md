

```c++
class Solution {
private:
    int sum;

    void divide(int l, int r, vector<int>& nums){
        if (l==r) return;
        int mid = (l+r)/2;
        divide(l, mid, nums);
        divide(mid+1, r, nums);
        merge(l, r, mid, nums);
    }

    void merge(int l, int r, int mid, vector<int>& nums) {
        int i = l;
        int j = mid+1;
        vector<int> tmp;
        while(i <= mid && j<= r){
            if (nums[i] > nums[j]){
                tmp.push_back(nums[j++]);
                sum += mid + 1 -i;
            }
            else
                tmp.push_back(nums[i++]);
        }
        while(i<=mid)
            tmp.push_back(nums[i++]);

        while(j <= r) 
            tmp.push_back(nums[j++]);

        int index = 0;
        for(int k=l; k<=r;k++)
            nums[k] = tmp[index++];
    }

public:
    int reversePairs(vector<int>& nums) {
        if (nums.size() < 2)  return 0;
        sum = 0;
        int l = 0;
        int r = nums.size()-1;
        divide(l, r, nums);
        return sum;
    }
};
```

