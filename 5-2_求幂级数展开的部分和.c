#include<stdio.h>
#include<math.h>
int main(){
    double a=1,input,aa=1,bb=1;
    double i;
    scanf("%lf",&input);
    for(i=1;fabs(aa/bb)>0.00001;i++){
        aa=pow(input,i);
        bb*=i;
        a+=aa/bb;
    }
    printf("%.4lf",a);
}