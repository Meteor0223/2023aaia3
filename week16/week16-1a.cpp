//week16-1a.cpp
#include <stdio.h>
int MYPOWER(int a,int b){
	int ans=a;
	for(int i=1;i<b;i++){
		ans*=a;	
	}
	return ans;
}
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}