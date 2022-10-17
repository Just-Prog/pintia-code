#include<stdio.h>
#include<math.h>
int main(){
    double a,ans;
    scanf("%lf",&a);
    if(a>=0){
        ans=pow(a,0.5);
    }else if(a<0){
        ans=pow(a+1,2)+2*a+(1/a);
    }
    printf("f(%.2lf) = %.2lf\n",a,ans);
    return 0;
}