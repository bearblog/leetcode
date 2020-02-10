# 解法一

```c++
class Solution {
public:
    int Fibonacci(int n) {
        if (n==0 || n==1) 
            return n;
        return Fibonacci(n-1)+Fibonacci(n-2)
    }
}
```



# 解法二

```c++
class Solution {
public:
    int Fibonacci(int n) {
        if (n==0 || n==1) 
            return n;
        int a = 1;
        int b = 0;
        int result = 0;
        for (int i =0; i<n-1; i++) {
            result = a+b;
            b = a;
            a = result;
        }
        return result;
    }
};
```

