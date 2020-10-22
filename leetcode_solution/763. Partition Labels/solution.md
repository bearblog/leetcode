```c++
class Solution {
public:
    vector<int> partitionLabels(string S) {
        int last[26];
        int len = S.size();
        for (int i = 0; i < len; i++) {
            last[S[i] - 'a'] = i;
        }
        vector<int> partition;
        int start = 0, end = 0;
        for (int i = 0; i < len; i++) {
            end = max(end, last[S[i] - 'a']);
            if (i == end) {
                partition.push_back(end - start + 1);
                start = end + 1;
            }
        }
        return partition;
    }
};
```

