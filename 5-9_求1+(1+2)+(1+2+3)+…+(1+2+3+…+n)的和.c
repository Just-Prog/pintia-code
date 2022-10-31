// Problem: 5-9 求1+(1+2)+(1+2+3)+…+(1+2+3+…+n)的和
// Contest: PTA
// URL: https://pintia.cn/problem-sets/1586900702411124736/exam/problems/1586919694391603208
// Memory Limit: 64 MB
// Time Limit: 400 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<stdio.h>
int main(){
	int a=1,b=0,n;
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++){
		b+=a;
		a+=i+1;
	}
	printf("sum = %d\n",b);
	return 0;
}