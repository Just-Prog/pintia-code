// Problem: 5-3 编程打印空心字符菱形
// Contest: PTA
// URL: https://pintia.cn/problem-sets/1586900702411124736/exam/problems/1586919694391603202
// Memory Limit: 64 MB
// Time Limit: 400 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<stdio.h>
int main(){
	char a;
	int b,i;
	scanf("%c%d",&a,&b);
	for(i=1;i<=b/2+1;i++){
		int o;
		for(o=1;o<=b/2-i+1;o++){
			//printf("2: Success. o=%d now.\n",o);
			printf(" ");
		}
		printf("%c",a+(i-1));
		if(i!=1){
			for(o=1;o<=(i-1)*2-1;o++){
				printf(" ");
			}
			printf("%c",a+(i-1));
		}
		printf("\n");
	}
	for(i=b/2;i>=1;i--){
		int o;
		for(o=1;o<=b/2-i+1;o++){
			//printf("2: Success. o=%d now.\n",o);
			printf(" ");
		}
		printf("%c",a+(i-1));
		if(i!=1){
			for(o=1;o<=(i-1)*2-1;o++){
				printf(" ");
			}
			printf("%c",a+(i-1));
		}
		printf("\n");
	}
	return 0;
}