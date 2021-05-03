/**
 * 递归实现那Fibonacci数列
 * author：贺元奇
 * time：2021-4-16
 *Fibonacci数列：1，1，2，3，5，8..
 *F(n) = F(n-1)+F(n+1)  n >= 3
 */

#include<stdio.h>

/**
 * pram：int 输出的第几个Fibonacci数列元素
 * return： int  第n个Fibonacci数列元素
 */
int fibo(int n)
{
        if(n == 1 || n == 2)
                return 1;
        return fibo(n-1)+fibo(n-2);

}
int main()
{
        int n; //希望输出的Fibonacci数列元素的个数
        printf("请输入希望输出的元素个数：");
        scanf("%d",&n);
        for(int i = 1; i <= n; i++)
        {
            printf("%d ",fibo(i));

        }
}

 


