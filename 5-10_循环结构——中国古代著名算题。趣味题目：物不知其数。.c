#include<stdio.h>
int main(){
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    int i=1;
    while(1){
        if(i%3==x&&i%5==y&&i%7==z){
            break;
        }
        i++;
    }
    printf("%d\n",i);
    return 0;
}