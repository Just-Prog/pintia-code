#include<stdio.h>
int main(){
    int i;
    for(i=1000;i<=9999;i++){
        if(i==((i/100+i%100)*(i/100+i%100))){
            printf("%5d",i);
        }
    }
    printf("\n");
    return 0;
}