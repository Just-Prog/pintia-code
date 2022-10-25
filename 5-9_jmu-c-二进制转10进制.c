#include<stdio.h>
#include<math.h>
#include<string.h>
int count(int tmp){
    int w=1;
    while(tmp>9){
        tmp/=10;
        w++;
    }
    return w;
}
int main(){
    int c,ans=0;
    char n[100000];
    gets(n); //Dangerous
    c=strlen(n);
    int i;
    for(i=0;i<c;i++){
        if(n[i]!='1'&&n[i]!='0'){
            printf("error input!\n");
            return 0;
        }
    }
    for(i=c-1;i>=0;i--){
        if(n[i]=='1'){
            //printf("ans=%d\n",ans);
            ans+=pow(2,c-1-i);
            //printf("ans+=%d\n",(int)pow(2,i));
        }
    }
    printf("%d",ans);
    return 0;
}