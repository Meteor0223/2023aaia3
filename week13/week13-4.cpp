//week13-4.cpp 解 Asvent of code 2024 Day 1 題目
//前面都幫你寫好了using namespace std; #include <vector>
int main() {
    int a,b,ans=0;
    vector<int> A,B;
    while(cin>>a>>b){
        A.push_back(a);
        B.push_back(b);
    }
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    for(int i=0;i<A.size();i++){
        ans += abs(A[i]-B[i]);
    }
    cout<<"答案是:"<<ans;
}