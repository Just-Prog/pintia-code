#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int w=1,nn=n;
    while(nn>9){
        w++;
        nn/=10;
    }
    int i,a=0,b=0;
    for(i=1;i<=w;i++){
        int t=n%10;
        if(t%2==0){
            a++;
        }else b++;
        n/=10;
    }
    if(a==b){
        printf("YES\n");
    }else printf("NO\n");
    return 0;
}