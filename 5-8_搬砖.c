// Problem: 5-8 搬砖
// Contest: PTA
// URL: https://pintia.cn/problem-sets/1586900702411124736/exam/problems/1586919694391603207
// Memory Limit: 61 MB
// Time Limit: 1600 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<stdio.h>
int main(){
	int a,b,c,n,ans=0;
	scanf("%d",&n);
	for(a=0;a<=n/3;a++){
		for(b=0;b<=n/2;b++){
			for(c=0;c<=2*n;c+=2){
				if(a*3+b*2+c/2==n&&a+b+c==n){
					ans++;
				}
			}
		}
	}
	printf("%d\n",ans);
	return 0;
}