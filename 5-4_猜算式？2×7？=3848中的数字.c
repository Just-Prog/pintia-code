// Problem: 5-4 猜算式？2*7？=3848中的数字
// Contest: PTA
// URL: https://pintia.cn/problem-sets/1586900702411124736/exam/problems/1586919694391603203
// Memory Limit: 64 MB
// Time Limit: 400 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<stdio.h>
int main(){
	int a,b;
	for(a=1;a<=9;a++){
		for(b=0;b<=9;b++){
			int tmp=(a*10+2)*(70+b);
			if(tmp==3848){
				printf("%d2*7%d=3848\n",a,b);
			}
		}
	}
	return 0;
}