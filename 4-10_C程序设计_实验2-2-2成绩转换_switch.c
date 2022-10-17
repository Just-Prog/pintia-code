#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>100||a<0){
        printf("Input error!\n");
        return 0;
    }
    switch(a/10){
        case 10:
        case 9:{
            printf("A\n");
            break;
        }
        case 8:{
            printf("B\n");
            break;
        }
        case 7:{
            printf("C\n");
            break;
        }
        case 6:{
            printf("D\n");
            break;
        }
        default:{
            printf("E\n");
        }
    }
    return 0;
}