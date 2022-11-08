// Problem: 6-7 二分查找法
// Contest: PTA
// URL: https://pintia.cn/problem-sets/1589224141138452480/exam/problems/1589224197191139334
// Memory Limit: 64 MB
// Time Limit: 400 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<stdio.h>
#include<stdbool.h>
int main(){
	int n[]={1,2,3,4,5,6,7,8,9,10};
	int a;
	scanf("%d",&a);
	int left=0,right=9,mid;
	if(a<=n[left]||a>n[right]){
		printf("not found\n");
		return 0;
	}
	bool sign=0;
	while(left<=right&&sign!=1){
		mid=(left+right)/2;
		if(n[mid]>a){
			right=mid;
		}else if(n[mid]<a){
			left=mid;
		}else if(n[mid]==a){
			printf("weizhi:%d\n",mid);
			sign=1;
			break;
		}
	}
	if(sign==0){
		printf("not found\n");
	}
	return 0;
}