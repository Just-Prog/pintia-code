#include<stdio.h>
int main(){
    char a=getchar();
    if(a>='0'&&a<='9'){
        a+=2;
    }
    if(a>='A'&&a<='Z'){
        a+=3;
    }
    if(a>='a'&&a<='z'){
        a+=4;
    }
    printf("%c\n",a);
}