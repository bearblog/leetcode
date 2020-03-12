

```c++
class Solution {
public:
    int minArray(vector<int>& numbers) {
        int i=0, j=numbers.size() - 1;
        int m = 0;
        while (i < j) {
            if(numbers[i] < numbers[j])
                return numbers[i];
            m = (i+j) / 2;
            if(numbers[m] < numbers[i])
                j = m;
            else if (numbers[m] > numbers[i])
                i = m + 1;
            else
                i++;
        }
        return numbers[i];
    }
};
```

