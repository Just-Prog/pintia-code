// Problem: 5-10 输出上半张九九乘法表
// Contest: PTA
// URL: https://pintia.cn/problem-sets/1586900702411124736/exam/problems/1586919694391603209
// Memory Limit: 64 MB
// Time Limit: 400 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<stdio.h>
int main(){
	int i;
	for(i=1;i<=9;i++){
		int o;
		for(o=1;o<=i-1;o++){
			int p;
			for(p=1;p<=7;p++){
				printf(" ");
			}
		}
		for(o=i;o<=9;o++){
			printf("%d*%d=%2d ",i,o,i*o);
		}
		printf("\n");
	}
	return 0;
}