/**
 * д�������õݹ鷽ʽʵ������������������������
 * author:��Ԫ��
 * time��2021-4-16 
 * 
 * 
 */
#include<stdio.h>

/**
 * function�������������
 * pram: n: int�����������
 * return��none
 */
void forwardOutput(int n)
{
    if(n==0) return;
    else forwardOutput(n/10);
    printf("%d ",n%10);  

}
/**
 * function�������������
 * pram: n: int�����������
 * return��none
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
    printf("������һ����������");
    scanf("%d",&n);
    printf("�������Ϊ��");
    backwardOutput(n);
    printf("\n");
    printf("�������Ϊ��");
    forwardOutput(n);
}

