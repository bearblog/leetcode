

```c++
class Solution {
private:
void generate(string item, int left, int right, vector<string> &result) {
    if (!left && !right) {
        result.push_back(item);
        return;
    }
    if (left > 0) {
        generate(item+'(', left-1, right, result);
    }
    if (left < right) {
        generate(item + ')', left, right-1, result);
    }
}

public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        generate("", n, n, result);
        return result;
    }
};
```

