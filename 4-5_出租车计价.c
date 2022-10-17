#include<stdio.h>
int main(){
    double a,ans;
    int b;
    scanf("%lf%d",&a,&b);
    if(a<3){
        ans=10;
    }
    if(a>=3&&a<10){
        ans=10+(a-3)*2;
    }
    if(a>=10){
        ans=10+14+(a-10)*3;
    }
    if(b>=5){
        ans+=(b/5)*2;
    }
    printf("%.0lf",ans);
}