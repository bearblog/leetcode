#
# @lc app=leetcode id=274 lang=python3
#
# [274] H-Index
#

# @lc code=start
class Solution:
    def hIndex(self, citations: List[int]) -> int:
        citations.sort(reverse=True)
        h = 0 
        for citation in citations:
            if citation > h:
                h += 1
                continue
            return h
        return h
# @lc code=end

