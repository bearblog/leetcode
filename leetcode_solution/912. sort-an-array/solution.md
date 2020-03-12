快排

```c++
class Solution {
private:
    void swap(vector<int> &nums, int i, int j) {
        int tmp = nums[i];
        nums[i] = nums[j];
        nums[j] = tmp;
    }

    int partition(vector<int> &nums, int left, int right){
        int i = left + 1;
        int j = right;
        int pivot = nums[left];
        while (i <= j) {
            while (i <= right && nums[i] <= pivot)
                i++;

            while (nums[j] > pivot)
                j--;

            if (i < j)
                swap(nums, i++, j--);
        }
        swap(nums, left, j);
        return j;
    }

    void quick_sort(vector<int> &nums, int left, int right) {
        if (left >= right) return;
        int j = partition(nums, left, right);
        quick_sort(nums, left, j-1);
        quick_sort(nums, j+1, right);
    }

public:
    vector<int> sortArray(vector<int>& nums) {
        quick_sort(nums, 0, nums.size()-1);
        return nums;
    }
};
```

