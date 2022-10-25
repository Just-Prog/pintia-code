#include<stdio.h>
int main(){
    int i=0,j=0;
    while(1){
        int n;
        scanf("%d",&n);
        if(n==0){
            break;
        }
        if(n>0){
            i++;
        }else j++;
    }
    printf("i=%d\nj=%d\n",i,j);
    return 0;
}