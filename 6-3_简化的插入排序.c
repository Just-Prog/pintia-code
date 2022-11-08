// Problem: 6-3 简化的插入排序
// Contest: PTA
// URL: https://pintia.cn/problem-sets/1589224141138452480/exam/problems/1589224197191139330
// Memory Limit: 64 MB
// Time Limit: 400 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int num[n+2],i;
	for(i=1;i<=n;i++){
		scanf("%d",&num[i]);
	}
	int o;
	scanf("%d",&o);
	if(n==0){
		printf("%d \n",o);
		return 0;
	}
	for(i=1;i<=n;i++){
		if(o<=num[1]){
			int p;
			for(p=n;p>=1;p--){
				num[p+1]=num[p];
			}
			num[1]=o;
			break;
		}else if(num[i]>=o&&o<=num[i+1]){
			int p;
			for(p=n;p>=i;p--){
				num[p+1]=num[p];
			}
			num[i]=o;
			break;
		}else if(num[n]<=o){
			num[n+1]=o;
			break;
		}
	}
	for(i=1;i<=n+1;i++){
		printf("%d ",num[i]);
	}
	return 0;
}