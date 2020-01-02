/*
 * @lc app=leetcode id=189 lang=cpp
 *
 * [189] Rotate Array
 */
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int start = 0;
        while (n && (k %= n)){
            for(int i = 0; i < k; ++i){
                swap(nums[i+start], nums[n-k+i+start]);
            }
            n -= k;
            start += k;
        }

    }
};

