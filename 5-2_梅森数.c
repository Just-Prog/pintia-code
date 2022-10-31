// Problem: 5-2 梅森数
// Contest: PTA
// URL: https://pintia.cn/problem-sets/1586900702411124736/exam/problems/1586919694391603201
// Memory Limit: 64 MB
// Time Limit: 400 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int main(){
	int n,i,t=0;
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		int o=pow(2,i)-1,p;
		bool sign=0;
		for(p=2;p<sqrt(o);p++){
			if(o%p==0){
				sign=1;
				break;
			}
		}
		if(sign){
			continue;
		}
		t++;
		printf("%d\n",o);
	}
	if(t==0){
		printf("None\n");
	}
	return 0;
}