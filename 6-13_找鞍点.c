// Problem: 6-13 找鞍点
// Contest: PTA
// URL: https://pintia.cn/problem-sets/1589224141138452480/exam/problems/1589224197191139340
// Memory Limit: 64 MB
// Time Limit: 400 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<stdio.h>
#include<stdbool.h>
int main(){
	int n;
	scanf("%d",&n);
	int y,x,a[n+1][n+1];
	for(y=1;y<=n;y++){
		for(x=1;x<=n;x++){
			scanf("%d",&a[y][x]);
		}
	}
	//int ym[n+1],xm[n+1];
	int yml[n+1],xml[n+1];
	for(y=1;y<=n;y++){
		int maxx=a[y][1],maxl=1;
		for(x=1;x<=n;x++){
			if(maxx<=a[y][x]){
				maxx=a[y][x];
				maxl=x;
			}
		}
		//ym[y]=maxx;
		yml[y]=maxl;
		//printf("y[%d] max is %d, location is %d\n",y,maxx,maxl);
	}
	for(x=1;x<=n;x++){
		int minn=a[1][x],minl=1;
		for(y=1;y<=n;y++){
			if(minn>=a[y][x]){
				minn=a[y][x];
				minl=y;
			}
		}
		//xm[x]=minn;
		xml[x]=minl;
		//printf("x[%d] min is %d, location is %d\n",x,minn,minl);
	}
	bool e=0;
	for(y=1;y<=n;y++){
		for(x=1;x<=n;x++){
			//printf("ym[%d]=%d, xm[%d]=%d\n",y,yml[y],x,xml[x]);
			if(x==yml[y]&&y==xml[x]){
				printf("%d %d\n",y-1,x-1);
				e=1;
			}
		}
	}
	if(e==0){
		printf("NONE\n");
	}
	return 0;
}