// Problem: 6-6 冒泡法排序
// Contest: PTA
// URL: https://pintia.cn/problem-sets/1589224141138452480/exam/problems/1589224197191139333
// Memory Limit: 64 MB
// Time Limit: 400 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<stdio.h>
int main(){
	int a,n;
	scanf("%d%d",&a,&n);
	int l[a+1],i;
	for(i=1;i<=a;i++){
		scanf("%d",&l[i]);
	}
	for(i=1;i<=n;i++){
		int o;
		for(o=1;o<=a-1;o++){
			if(l[o]>l[o+1]){
				int tmp=l[o];
				l[o]=l[o+1];
				l[o+1]=tmp;
			}
		}
	}
	for(i=1;i<=a;i++){
		printf("%d",l[i]);
		if(i!=a){
			printf(" ");
		}else printf("\n");
	}
}