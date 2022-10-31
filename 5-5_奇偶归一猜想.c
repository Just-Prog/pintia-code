// Problem: 5-5 奇偶归一猜想
// Contest: PTA
// URL: https://pintia.cn/problem-sets/1586900702411124736/exam/problems/1586919694391603204
// Memory Limit: 64 MB
// Time Limit: 400 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	while(a!=1){
		if(a%2){
			a*=3;
			a++;
		}else a/=2;
		printf("%d",a);
		if(a!=1)
			printf(" ");
	}
	printf("\n");
	return 0;
}