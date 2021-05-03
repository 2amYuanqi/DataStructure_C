/**
 * 写函数，用递归方式实现整数的正序输出、反序输出
 * author:贺元奇
 * time：2021-4-16 
 * 
 * 
 */
#include<stdio.h>

/**
 * function：正序输出整数
 * pram: n: int，待输出的数
 * return：none
 */
void forwardOutput(int n)
{
    if(n==0) return;
    else forwardOutput(n/10);
    printf("%d ",n%10);  

}
/**
 * function：反序输出整数
 * pram: n: int，待输出的数
 * return：none
 */
void backwardOutput(int n)
{
    if(n==0) return;
    else
    {
        printf("%d ",n%10);
        backwardOutput(n/10);
    }
    
}

int main()
{
    int n;
    printf("请输入一个正整数：");
    scanf("%d",&n);
    printf("逆序输出为：");
    backwardOutput(n);
    printf("\n");
    printf("正序输出为：");
    forwardOutput(n);
}

