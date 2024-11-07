//week09-1.cpp LeetCode 1672. Richest Customer Wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int M=accounts.size();//有幾個人
        int N=accounts[0].size();//這個人,有幾個帳戶
        int ans=0;
        for(int i=0;i<M;i++){//第i個人
            int total=0;
            for(int j=0;j<N;j++){//第i個人的第j個帳戶
                total+=accounts[i][j];
            }
            if(total>ans)ans=total;
        }
        return ans;
    }
};