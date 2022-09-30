#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int a_3=a/100,a_2=a/10%10,a_1=a%10;
    printf("%d,%d,%d\n",a_3,a_2,a_1);
    return 0;
}