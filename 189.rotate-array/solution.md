

# 解法一：

```C++
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len = nums.size();
        k %= len;
        if(k==0)
            return;
        reverseArray(nums, 0, len-1);
        reverseArray(nums, 0, k-1);
        reverseArray(nums, k, len-1);
    }

    void reverseArray(vector<int>& nums, int begin, int end) {
        while (begin < end){
            int tmp = nums[begin];
            nums[begin] = nums[end];
            nums[end] = tmp;
            begin++;
            end--;
        }
    }
};
```



# 解法二：

```C++
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int start = 0;
        while (n && (k %= n)){
            for(int i = 0; i < k; ++i){
                swap(nums[i+start], nums[n-k+i+start]);
            }
            n -= k;
            start += k;
        }

    }
};
```

