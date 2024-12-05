//week13-3.cpp 解 Asvent of code 2024 Day 1 題目
//前面都幫你寫好了using namespace std; #include <vector>
int main() {
    int a,b;
    vector<int> A,B;
    while(cin>>a>>b){
        A.push_back(a);
        B.push_back(b);
    }
    for(int i=0;i<A.size();i++){
        cout<<A[i]<<" ";
    }
}