/* 
 * @pintia psid=14 pid=736 compiler=GCC
 * 
 * ProblemSet: 基础编程题目集
 * 
 * Title: 6-4 求自定类型元素的平均
 * 
 * https://pintia.cn/problem-sets/14/problems/736
 * 
 */

// @pintia code=start

ElementType Average( ElementType a[], int b ){
    ElementType ans=0.0;
    for(int i=0;i<b;i++){
        ans+=a[i];
    }
    return ans/b;
}

// @pintia code=end