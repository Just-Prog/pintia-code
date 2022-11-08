// Problem: 6-8 调查电视节目受欢迎程度
// Contest: PTA
// URL: https://pintia.cn/problem-sets/1589224141138452480/exam/problems/1589224197191139335
// Memory Limit: 64 MB
// Time Limit: 400 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<stdio.h>
int a[9];
int main(){
	int n;
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++){
		int tmp;
		scanf("%d",&tmp);
		if(tmp<1||tmp>8){
			continue;
		}
		a[tmp]++;
	}
	for(i=1;i<=8;i++){
		printf("%4d%4d\n",i,a[i]);
	}
	return 0;
}