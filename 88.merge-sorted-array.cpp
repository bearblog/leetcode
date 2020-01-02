/*
 * @lc app=leetcode id=88 lang=cpp
 *
 * [88] Merge Sorted Array
 */
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int current = m+n-1;
        while (current >= 0){
            if (n==0) return;
            if (m < 1){
                nums1[current--] = nums2[--n];
                continue;
            }
            if (nums1[m-1] > nums2[n-1]){
                nums1[current--] = nums1[--m];
            } else {
                nums1[current--] = nums2[--n];
            }
        }
    }
};

