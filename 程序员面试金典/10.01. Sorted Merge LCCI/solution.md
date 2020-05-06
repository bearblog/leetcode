

```c++
class Solution {
public:
    void merge(vector<int>& A, int m, vector<int>& B, int n) {
        int i = m - 1;
        int j = n - 1;
        int cur = m + n - 1;
        while(i > -1 && j > -1) {
            if (A[i] < B[j]) {
                A[cur] = B[j];
                j--;
            } else {
                A[cur] = A[i];
                i--;
            }
            cur--;
        } 
        if (j != -1) {
            for (int i = 0; i <= j; ++i)
                A[i] = B[i];
        }
    }
};
```

