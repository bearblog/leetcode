```c++
class Solution {
public:
    vector<int> singleNumbers(vector<int>& nums) {
        int sign = 0;
        for (int n : nums) sign ^= n;
        // sign和-sign与运算之后，会产生倒数第二位二进制为1，其他位为0
        sign &= -sign;
        int n1 = 0, n2 = 0;
        for (int n : nums) {
            if (n & sign) n1 ^= n;
            else n2 ^= n;
        }
        return {n1, n2};
    }
};
```

