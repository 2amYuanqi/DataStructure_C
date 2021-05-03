#include <stdio.h>
#include <stdlib.h>
/**
 *顺序表定义及操作
 * author：贺元奇
 * time：2021-3-1
 * 顺序表特点：用地址连续的存储单元一次存储线性表中的元素
 */

#define MaxSize 50  //线性表最大长度
#define ElemType int  //元素类型

/*定义顺序表结构体*/
typedef struct{
    ElemType data[MaxSize];  //元素
    int length;       //长度
}SqList;

/*等价定义
struct list{
    ElemType data[MaxSize];  //元素
    int length;       //长度
}
typedef struct list Sqlist;
*/


int main(){
    printf("%d",sizeof(int));
    return 0;
}




