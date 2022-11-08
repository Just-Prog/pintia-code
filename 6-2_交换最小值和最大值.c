// Problem: 6-2 交换最小值和最大值
// Contest: PTA
// URL: https://pintia.cn/problem-sets/1589224141138452480/exam/problems/1589224197191139329
// Memory Limit: 64 MB
// Time Limit: 400 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	int nn[n+1],mi=2147483647,ma=-2147483648;
	for(i=1;i<=n;i++){
		scanf("%d",&nn[i]);
		if(mi>nn[i]){
			mi=nn[i];
		}
		if(ma<nn[i]){
			ma=nn[i];
		}
	}
	for(i=1;i<=n;i++){
		if(nn[i]==mi){
			int tmp=nn[1];
			nn[1]=nn[i];
			nn[i]=tmp;
		}
	}
	for(i=1;i<=n;i++){
		if(nn[i]==ma){
			int tmp=nn[n];
			nn[n]=nn[i];
			nn[i]=tmp;
		}
	}
	for(i=1;i<=n;i++){
		printf("%d ",nn[i]);
	}
	return 0;
}