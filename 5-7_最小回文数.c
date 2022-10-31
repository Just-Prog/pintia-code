// Problem: 5-7 最小回文数
// Contest: PTA
// URL: https://pintia.cn/problem-sets/1586900702411124736/exam/problems/1586919694391603206
// Memory Limit: 64 MB
// Time Limit: 400 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<stdio.h>
#include<stdbool.h>
int main(){
	int a;
	scanf("%d",&a);
	int i;
	for(i=1;i<=a;i++){
		int n;
		scanf("%d",&n);
		//printf("n=%d\n",n);
		if(n<10){
			printf("%d\n",n+1);
			continue;
		}
		int l;
		for(l=n+1;l<=2147483647;l++){
			char arr[11];
			int w=1,ll=l;
			//printf("ll=%d\n",ll);
			while(ll>=10){
				arr[w]=ll%10+'0';
				ll/=10;
				w++;
			}
			arr[w]=ll+'0';
			int o;
			bool nohw=0;
			for(o=1;o<=w/2;o++){
				if(arr[o]!=arr[w-o+1]){
					nohw=1;
					break;
				}
			}
			if(nohw){
				continue;
			}else{
				printf("%d\n",l);
				break;
			}
		}
	}
}