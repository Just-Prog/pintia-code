// Problem: 6-1 将数组中的数逆序存放
// Contest: PTA
// URL: https://pintia.cn/problem-sets/1589224141138452480/exam/problems/1589224197191139328
// Memory Limit: 64 MB
// Time Limit: 400 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<stdio.h>
int main(){
	int a[11],b[11],n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++){
		b[n+1-i]=a[i];
	}
	for(i=1;i<=n;i++){
		printf("%d",b[i]);
		if(i!=n){
			printf(" ");
		}else printf("\n");
	}
	return 0;
}