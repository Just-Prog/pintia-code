// Problem: 6-5 数组元素的删除
// Contest: PTA
// URL: https://pintia.cn/problem-sets/1589224141138452480/exam/problems/1589224197191139332
// Memory Limit: 64 MB
// Time Limit: 400 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n+1],i;
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	int k;
	scanf("%d",&k);
	for(i=1;i<=k;i++){
		int del;
		scanf("%d",&del);
		int p;
		for(p=del;p<=n-1;p++){
			a[p]=a[p+1];
		}
		n--;
	}
	for(i=1;i<=n;i++){
		printf("%d",a[i]);
		if(i!=n){
			printf(" ");
		}else printf("\n");
	}
	return 0;
}