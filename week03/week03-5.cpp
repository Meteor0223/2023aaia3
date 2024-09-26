//week03-5.cpp LeetCode 459. Repeated Substring Pattern 判斷某個字,是不是重複做出來的字串
//abcabcabcabc
//abcabcabcabcabcabcabcabc把它複製兩次
// bcabcabcabcabcabcabcab 頭尾砍掉1個字母
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string s2=s+s; //把它複製兩次
        int N=s2.length(); 
        return s2.substr(1,N-2).find(s) != string::npos;
    }
};