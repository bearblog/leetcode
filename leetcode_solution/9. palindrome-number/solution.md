

```c++
class Solution {
private:
    int reverse(int x) {
        int res = 0;
        while (x != 0) {
            int cur = x % 10;
            if (res > INT_MAX / 10 || res < INT_MIN / 10 || (res == INT_MAX / 10 & cur > 7) || (res == INT_MIN / 10 & cur < -8))
                return 0;
            res = res * 10 + cur;
            x /= 10;
        }
        return res;
    }
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int reversed_x = reverse(x);
        if (x == reversed_x)
            return true;
        else
            return false;
    }
};
```

