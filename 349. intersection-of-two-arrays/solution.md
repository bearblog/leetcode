

```c++
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_set<int> cache(nums1.begin(), nums1.end());

        for (auto num2 : nums2)
            if (cache.erase(num2)) res.push_back(num2);

        return res;
    }
};
```

