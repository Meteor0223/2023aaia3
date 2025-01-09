//week18-1b.cpp LeetCode 2185. Counting Words With a Given Prefix
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans=0;
        int L=pref.length();
        for(string word:words){
            if(pref==word.substr(0, L))ans++;
                
        }
        return ans;
        
        
    }

};