#week03-5.py LeetCode 459. Repeated Substring Pattern 判斷某個字,是不是重複做出來的字串
#abcabcabcabc
#abcabcabcabcabcabcabcabc把它複製兩次
# bcabcabcabcabcabcabcab 頭尾砍掉1個字母
class Solution:
    def repeatedSubstringPattern(self, s: str) -> bool:
        s2=s+s
        s2=s2[1:len(s2)-1]
        if s in s2:return True
        else:return False