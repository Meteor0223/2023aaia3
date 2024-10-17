//week06-2b.cpp
#include <iostream>
#include <vector>
using namespace std;
int main(){
	int now;
	vector<int> a;
	while(cin>>now){
		a.push_back(now);
		for(int b:a)cout<<b<<' ';
		cout<<"\n";
		//cout<<now<<"\n";
	}
}
