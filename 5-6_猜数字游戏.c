#include<stdio.h>
int main(){
    int rannum,limittime;
    scanf("%d%d",&rannum,&limittime);
    int i;
    for(i=1;i<=limittime;i++){
        int tmp;
        scanf("%d",&tmp);
        if(tmp<0){
            break;
        }
        if(tmp==rannum){
            if(i==1){
                printf("Bingo!\n");
                return 0;
            }else if(i<=3){
                printf("Lucky You!\n");
                return 0;
            }else if(i<=limittime){
                printf("Good Guess!\n");
                return 0;
            }
        }else if(tmp>rannum){
            printf("Too big\n");
        }else if(tmp<rannum){
            printf("Too small\n");
        }
    }
    printf("Game Over\n");
    return 0;

}