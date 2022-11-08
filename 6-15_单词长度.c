// Problem: 6-15 单词长度
// Contest: PTA
// URL: https://pintia.cn/problem-sets/1589224141138452480/exam/problems/1589224197191139342
// Memory Limit: 64 MB
// Time Limit: 400 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<stdio.h>
#include<stdbool.h>
int main(){
	char a;
	int cnt=0,p=1;
	bool c=0;
	while(scanf("%c",&a)&&a!='\n'){
		if(a!=' '&&a!='.'){
			cnt++;
			c=1;
		}else{
			if(cnt!=0){
				if(p==1){
					printf("%d",cnt);
				}else printf(" %d",cnt);
				p++;
			}
			cnt=0;
		}
	}
	return 0;
}