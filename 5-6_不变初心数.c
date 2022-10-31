// Problem: 5-6 不变初心数
// Contest: PTA
// URL: https://pintia.cn/problem-sets/1586900702411124736/exam/problems/1586919694391603205
// Memory Limit: 64 MB
// Time Limit: 400 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<stdio.h>
int p;
int check(int tmp,int cheng){
	if(cheng==10){
		return 1;
	}
	int tmpbak=tmp;
	tmp*=cheng;
	//printf("tmp = %d, ",tmp);
	int test=tmp%10;
	while(tmp>=10){
		tmp/=10;
		test+=tmp%10;
	}
	//printf("test = %d,p = %d\n",test,p);
	if(test==p){
		if(check(tmpbak,cheng+1)==1){
			return 1;
		}else return -1;
	}else return -1;
}
int main(){
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		int a;
		scanf("%d",&a);
		//printf("---- Test %d ----\n",i);
		if(a==0){
			printf("0\n");
			return 0;
		}
		int tmp=a;
		p=a%10;
		while(a>10){
			a/=10;
			p+=a%10;
		}
		
		if(check(tmp,2)!=-1){
			printf("%d\n",p);
		}else printf("NO\n");
	}
	return 0;
}