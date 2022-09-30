#include<stdio.h>
#include<math.h>
int main(){
    int m,y;
    double r;
    scanf("%d%d%lf",&m,&y,&r);
    double sum=(double)m;
    sum*=pow(1+r,y);
    printf("sum = %.2lf\n",sum);
    return 0;
}