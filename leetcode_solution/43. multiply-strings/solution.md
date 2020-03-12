

```c++
class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1=="0" || num2=="0") return "0";
        string res = "0";
        for (int i = num2.size()-1; i>=0; i--) {
            int carry = 0;
            string tmp = "";
            for (int j = 0; j < num2.size()-1-i; j++)
                tmp.append("0");
            int n2 = num2[i] -  '0';

            for (int j = num1.size()-1; j>=0 || carry != 0; j--) {
                int n1 = j < 0 ? 0 : num1[j] - '0';
                int product = (n1 * n2 + carry) % 10;
                carry = (n1 * n2 + carry) / 10;
                tmp.append(to_string(product));
            }
            reverse(tmp.begin(), tmp.end());
            res = addStrings(res, tmp);
        }
        return res;
    }

private:
    string addStrings(string num1, string num2) {
        string res;
        int carry = 0;
        for (int i = num1.size()-1, j = num2.size()-1; i>=0 || j>=0 || carry != 0; i--, j--) {
            int x = i < 0 ? 0 : num1[i] - '0';
            int y = j < 0 ? 0 : num2[j] - '0';
            int sum = (x + y + carry) % 10;
            carry = (x + y + carry) / 10;
            res.append(to_string(sum));
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
```

