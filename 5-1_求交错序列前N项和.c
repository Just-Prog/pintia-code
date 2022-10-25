#include<stdio.h>
#include<stdbool.h>
int main(){
    double a=1;
    double aa=2,bb=3;
    int n,i;
    bool sign=0;
    scanf("%d",&n);
    for(i=1;i<n;i++){
        if(sign){
            a+=aa/bb;
            sign=0;
        }else{
            a-=aa/bb;
            sign=1;
        }
        aa++;
        bb+=2;
    }
    printf("%.3lf\n",a);
}