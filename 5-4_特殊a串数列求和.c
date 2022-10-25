#include<stdio.h>
#include<math.h>
int main(){
    int a,n,ans=0,tmp=0;
    scanf("%d%d",&a,&n);
    int i;
    for(i=0;i<n;i++){
        tmp+=a*pow(10,i);
        ans+=tmp;
    }
    printf("s = %d\n",ans);
    return 0;
}