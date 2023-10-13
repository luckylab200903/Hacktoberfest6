#this is my solution for lenght of longest substring on leetcode

class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        ans = set()
        start = 0
        end = 0
        maxlength = 0
        
        while end < len(s):
            if s[end] not in ans:
                ans.add(s[end])
                end += 1
                maxlength = max(maxlength, end - start)
            else:
                ans.remove(s[start])
                start += 1
        
        return maxlength
