// Problem: 6-12 判断上三角矩阵
// Contest: PTA
// URL: https://pintia.cn/problem-sets/1589224141138452480/exam/problems/1589224197191139339
// Memory Limit: 64 MB
// Time Limit: 400 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<stdio.h>
#include<stdbool.h>
int main(){
	int n;
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++){
		int p;
		scanf("%d",&p);
		int a[p+1][p+1];
		int j,k;
		bool y=0;
		for(j=1;j<=p;j++){
			for(k=1;k<=p;k++){
				scanf("%d",&a[j][k]);
				if(j>k){
					if(a[j][k]!=0){
						y=1;
					}
				}
			}
		}
		if(y==1){
			printf("NO\n");
		}else printf("YES\n");
	}
	return 0;
}