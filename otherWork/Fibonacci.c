/**
 * �ݹ�ʵ����Fibonacci����
 * author����Ԫ��
 * time��2021-4-16
 *Fibonacci���У�1��1��2��3��5��8..
 *F(n) = F(n-1)+F(n+1)  n >= 3
 */

#include<stdio.h>

/**
 * pram��int ����ĵڼ���Fibonacci����Ԫ��
 * return�� int  ��n��Fibonacci����Ԫ��
 */
int fibo(int n)
{
        if(n == 1 || n == 2)
                return 1;
        return fibo(n-1)+fibo(n-2);

}
int main()
{
        int n; //ϣ�������Fibonacci����Ԫ�صĸ���
        printf("������ϣ�������Ԫ�ظ�����");
        scanf("%d",&n);
        for(int i = 1; i <= n; i++)
        {
            printf("%d ",fibo(i));

        }
}

 


