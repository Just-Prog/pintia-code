#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a>b){
        int t=a;
        a=b;
        b=t;
    }
    if(a>c){
        int t=a;
        a=c;
        c=t;
    }
    if(b>c){
        int t=b;
        b=c;
        c=t;
    }
    if(a+b<=c){
        printf("These sides do not correspond to a valid triangle\n");
        return 0;
    }
    double s=(a+b+c)/2,area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area = %.2lf; perimeter = %.2lf\n",area,a+b+c);
    return 0;
}