//weak02-4.cpp LeedCode 389. Find the Difference
class Solution {
public:
    char findTheDifference(string s, string t) {
        int H[256]={};//陣列,裡面統計字母出現次數,初始是0
        for(char c:s){
            H[c]++;
        }
        for(char c:t){
            H[c]--;
            if(H[c]<0)return c;
        }
        return ' ';
    }
}