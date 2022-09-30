/* 
 * @pintia psid=14 pid=735 compiler=GCC
 * 
 * ProblemSet: 基础编程题目集
 * 
 * Title: 6-3 简单求和
 * 
 * https://pintia.cn/problem-sets/14/problems/735
 * 
 */

// @pintia code=start

int Sum(int a[],int b){
    int ans=0;
    for(int i=0;i<b;i++){
        //printf("%d\n",a[i]);
        ans+=a[i];
    }
    return ans;
}

// @pintia code=end