#include<stdio.h>
int main(){
    int tr,rr=0,n;
    scanf("%d",&n);
    tr=3*n;
    int i;
    for(i=1;i<=n;i++){
        if(i%10==0&&rr>3*i){
            i+=30;
        }
        rr+=9;
    }
    if(tr>rr){
        printf("@_@ %d\n",tr);
    }else if(tr<rr){
        printf("^_^ %d\n",rr);
    }else printf("-_- %d\n",tr);
    return 0;
}