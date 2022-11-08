// Problem: 6-11 杨辉三角
// Contest: PTA
// URL: https://pintia.cn/problem-sets/1589224141138452480/exam/problems/1589224197191139338
// Memory Limit: 64 MB
// Time Limit: 400 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<stdio.h>
int a[11][11];
int main(){
	int n;
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++){
		int o;
		for(o=1;o<=i;o++){
			if(o==1||i==1){
				a[i][o]=1;
			}else a[i][o]=a[i-1][o]+a[i-1][o-1];
		}
	}
	for(i=1;i<=n;i++){
		int o;
		for(o=1;o<=i;o++){
			printf("%4d",a[i][o]);
		}
		printf("\n");
	}
	return 0;
}