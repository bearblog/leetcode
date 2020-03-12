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
    int fib(int n) {
        if (n==0 || n==1) return n;
        int a = 0;
        int b = 1;
        int result;
        for (int i=0; i<n-1; i++){
            result = (a+b) % 1000000007;
            a = b;
            b = result;
        }
        return result;
    }
};
```

