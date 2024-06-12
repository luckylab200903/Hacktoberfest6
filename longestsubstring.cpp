//this is my leetcode solution for longest substring in a string

class Solution {
public:
  int lengthOfLongestSubstring(string s) {
    std::unordered_set<char> ans;
    int start = 0, end = 0, maxlength = 0;
    while (end < s.size()) {
      if (ans.find(s[end]) == ans.end()) {
        ans.insert(s[end]);
        ++end;
        maxlength = std::max(maxlength, end - start);
      } else {
        ans.erase(s[start]);
        ++start;
      }
    }
    return maxlength;
  }
};
