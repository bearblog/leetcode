/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */
class Solution {
public:
    int mySqrt(int x) {
        long long r = x;
        while (r*r > x)
            r = (r + x/r) / 2;
    return r;
    }
};

