// Problem: 5-1 求n以内最大的k个素数以及它们的和
// Contest: PTA
// URL: https://pintia.cn/problem-sets/1586900702411124736/exam/problems/1586919694391603200
// Memory Limit: 64 MB
// Time Limit: 400 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int main(){
	int n,k,l=0;
	bool sign=0;
	scanf("%d%d",&n,&k);
	for(;k>=1;n--){
		if(n==1){
			break;
		}
		int o;
		for(o=2;o<n;o++){
			if(n%o==0){
				sign=1;
			}
		}
		if(sign){
			sign=0;
			continue;
		}
		l+=n;
		printf("%d",n);
		if(k!=1&&n!=2){
			printf("+");
		}
		//printf("\n now k = %d\n",k);
		k--;
	}
	printf("=%d\n",l);
	return 0;
}