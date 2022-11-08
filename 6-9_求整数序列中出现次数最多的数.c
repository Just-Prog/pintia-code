// Problem: 6-9 求整数序列中出现次数最多的数
// Contest: PTA
// URL: https://pintia.cn/problem-sets/1589224141138452480/exam/problems/1589224197191139336
// Memory Limit: 64 MB
// Time Limit: 400 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n+1],i;
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	int maxx=0,maxn;
	for(i=1;i<=n;i++){
		int o,cnt=0;
		for(o=1;o<=n;o++){
			if(a[i]==a[o]){
				cnt++;
			}
		}
		if(cnt>maxx){
			maxx=cnt;
			maxn=a[i];
		}
	}
	printf("%d %d\n",maxn,maxx);
	return 0;
}