//week17-4.cpp LeedCode 896. Monotonic Array
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int N=nums.size();
        bool big=false,small=false;
        for(int i=0;i<N-1;i++){
            int d=nums[i+1]-nums[i];
            if(d>0)big=true;
            if(d<0)small=true;
        }
        if(big==true&&small==true)return false;
        else return true;
    }
};