

```c++
class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        int n = A.size();
        vector<int> res(n);
        int i = 0, j = n - 1;
        for (int p = n-1; p >= 0; p--) {
            if (abs(A[i]) > abs(A[j]))
                res[p] = A[i] * A[i++];
            else
                res[p] = A[j] * A[j--];
        }
        return res;
    }
};
```

