#include<stdio.h>
int main(){
    int m,s;
    scanf("%d:%d",&m,&s);
    char a='A',b='M';
    if(m==12){
        a='P';
    }
    if(m==24){
        m=0;
        a='A';
    }
    if(m>12&&m<24){
        a='P';
        m-=12;
    }
    printf("%d:%d %c%c\n",m,s,a,b);
    return 0;
}