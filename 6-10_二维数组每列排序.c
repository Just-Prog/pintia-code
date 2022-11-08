// Problem: 6-10 二维数组每列排序
// Contest: PTA
// URL: https://pintia.cn/problem-sets/1589224141138452480/exam/problems/1589224197191139337
// Memory Limit: 64 MB
// Time Limit: 400 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<stdio.h>
int main(){
	int a[5][6];
	int i,o;
	for(i=1;i<=4;i++){
		for(o=1;o<=5;o++){
			scanf("%d",&a[i][o]);
		}
	}
	for(o=1;o<=5;o++){
		for(i=1;i<=3;i++){
			int t;
			for(t=i+1;t<=4;t++){
				if(a[i][o]>a[t][o]){
					int tmp=a[i][o];
					a[i][o]=a[t][o];
					a[t][o]=tmp;
				}
			}
		}
	}
	for(i=1;i<=4;i++){
		for(o=1;o<=5;o++){
			printf("%4d",a[i][o]);
		}
		printf("\n");
	}
	return 0;
}