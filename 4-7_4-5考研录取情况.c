#include<stdio.h>
int main(){
    int scoreline[4]={85,55,55,85},zfline=305,gbline=370;
    int a=0,tmp;
    for(int i=0;i<4;i++){
        scanf("%d",&tmp);
        if(tmp<=scoreline[i]){
            printf("C\n");
            return 0;
        }
        a+=tmp;
    }
    if(a>zfline){
        if(a>gbline){
            printf("A\n");
        }else printf("B\n");
    }else printf("C\n");
    return 0;
}