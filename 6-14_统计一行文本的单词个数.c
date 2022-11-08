// Problem: 6-14 统计一行文本的单词个数
// Contest: PTA
// URL: https://pintia.cn/problem-sets/1589224141138452480/exam/problems/1589224197191139341
// Memory Limit: 64 MB
// Time Limit: 400 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<stdio.h>
#include<stdbool.h>
int main(){
	char a;
	bool flag=0;
	int cnt=0;
	while(scanf("%c",&a)&&a!='\n'){
		if(a!=' '&&flag==0){
			cnt++;
			flag=1;
		}
		if(a==' '&&flag==1){
			flag=0;
		}
	}
	printf("%d\n",cnt);
	return 0;
}