//week12-6.cpp UVA11349 Symmetric Matrix
#include <iostream>
using namespace std;
int a[100][100];
int main(){
	int T,N;
	cin>>T;
	for(int t=1;t<=T;t++){
		char c,c2;//'N' '=' 3;
		cin>>c>>c2>>N;
		int a[100],m=1;
		for(int i=0;i<N*N;i++){
			cin>>a[i];
		}
		int j=0;
		for(int i=N*N-1;i>=0;i--){
			if(a[i]<0){
				m=0;
				break;
			}
			if(a[j]!=a[i]){
				m=0;
				break;
			}
			j++;
		}
		cout<<"Test #"<<t;
		if(m==1)cout<<": Symmetric.\n";
		else cout<<": Non-symmetric.\n";
	}
}



