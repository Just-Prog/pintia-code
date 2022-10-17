#include<stdio.h>
#include<math.h>
int main(){
    int a;
    scanf("%d",&a);
    if(!(a>=100&&a<=999)){
        printf("Invalid Value.\n");
        return 0;
    }
    int n3=a/100,n2=a/10%10,n1=a%10;
    if(pow(n3,3)+pow(n2,3)+pow(n1,3)==a){
        printf("Yes\n");
    }else printf("No\n");
    return 0;
}