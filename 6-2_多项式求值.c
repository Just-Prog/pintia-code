/* 
 * @pintia psid=14 pid=734 compiler=GCC
 * 
 * ProblemSet: 基础编程题目集
 * 
 * Title: 6-2 多项式求值
 * 
 * https://pintia.cn/problem-sets/14/problems/734
 * 
 */

// @pintia code=start

#include<math.h>

double f(int n,double a[],double x){
    double ans=0;
    for(int i=0;i<=n;i++){
        double xx=pow(x,(double)i);
        //printf("xx^%d=%lf\n",i,xx);
        ans+=a[i]*xx;
        //printf("ans%d=%lf\n",i,a[i]*xx);
    }
    return ans;
}

// @pintia code=end