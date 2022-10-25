#include<stdio.h>
#include<math.h>
int main(){
    int n,c=1;
    scanf("%d",&n);
    if(n==0){
        printf("ling\n");
        return 0;
    }else if(n<0){
        printf("fu ");
        n=-n;
    }
    //printf("n=%d\n",n);
    int nctmp=n,nc[99999],ncl=1;
    while(nctmp>0){
        nc[ncl]=nctmp%10;
        //printf("nc[%d]=%d\n",ncl,nctmp%10);
        nctmp/=10;
        c++;
        ncl++;
    }
    int i;
    for(i=1;i<c;i++){
        int tmp=nc[c-i];
        //printf("nc[%d-%d+1]=%d\n",c,i,tmp);
        switch(tmp){
            case 0:{
                printf("ling");
                break;
            }
            case 1:{
                printf("yi");
                break;
            }
            case 2:{
                printf("er");
                break;
            }
            case 3:{
                printf("san");
                break;
            }
            case 4:{
                printf("si");
                break;
            }
            case 5:{
                printf("wu");
                break;
            }
            case 6:{
                printf("liu");
                break;
            }
            case 7:{
                printf("qi");
                break;
            }
            case 8:{
                printf("ba");
                break;
            }
            case 9:{
                printf("jiu");
                break;
            }
            default:{
                break;
            }
        }
        if(i!=c-1){
            printf(" ");
        }else printf("\n");
    }
    return 0;
}