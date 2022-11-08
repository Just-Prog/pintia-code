/* 
 * @pintia psid=14 pid=739 compiler=GCC
 * 
 * ProblemSet: 基础编程题目集
 * 
 * Title: 6-7 统计某类完全平方数
 * 
 * https://pintia.cn/problem-sets/14/problems/739
 * 
 */

// @pintia code=start

int test[10];
int IsTheNumber(const int N){
	int o;
	for(o=0;o<=46341;o++)
    if(o*o==N){
    	//printf("%d*%d==%d!\n",o,o,N);
        int n=N,a,i;
        for(i=0;i<=9;i++){
        	test[i]=0;
        }
        do{
        	a=n%10;
            test[a]++;
            //printf("%d detected\n",a);
            n/=10;
        }while(n>0);
        for(i=0;i<=9;i++){
        	//printf("test[%d]=%d\n",i,test[i]);
            if(test[i]>=2){
                return 1;
            }
        }
    }
    return 0;
}


// @pintia code=end