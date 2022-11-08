// Problem: 6-4_数组循环左移
// Contest: PTA
// URL: https://pintia.cn/problem-sets/1589224141138452480/exam/problems/1589224197191139331
// Memory Limit: 64 MB
// Time Limit: 400 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	m%=n;
	int a[n+1],b[n+1],i;
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++){
		if(i-m<=0){
			b[n+(i-m)]=a[i];
		}else b[i-m]=a[i];
	}
	for(i=1;i<=n;i++){
		printf("%d",b[i]);
		if(i!=n){
			printf(" ");
		}else printf("\n");
	}
	return 0;
}