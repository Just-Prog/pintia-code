#include<stdio.h>
int main(){
    char a,b;
    scanf("%c%c",&a,&b);
    getchar();
    if(getchar()==b){
        if(getchar()==a){
            printf("yes\n");
            return 0;
        }else{
            printf("no\n");
            return 0;
        }
    }else printf("no\n");
    return 0;

}