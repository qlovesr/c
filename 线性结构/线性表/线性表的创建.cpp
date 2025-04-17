
#include "stdio.h"
#include "stdlib.h"
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2

typedef int status;
typedef int ElemType; //数据元素类型定义

#define LIST_INIT_SIZE 100
#define LISTINCREMENT  10
typedef int ElemType;
typedef struct{  //顺序表（顺序结构）的定义
	      ElemType * elem;
	      int length;
	      int listsize;
         }SqList;
//线性表的定义

status InitList(SqList& L)
// 线性表L不存在，构造一个空的线性表，返回OK，否则返回INFEASIBLE。
{
    // 请在这里补充代码，完成本关任务
    /********** Begin *********/
    if(L.elem != NULL)
        return INFEASIBLE;
        
    // 分配初始存储空间
    L.elem = (ElemType *)malloc(sizeof(ElemType) * LIST_INIT_SIZE);
    if(L.elem == NULL)
        return OVERFLOW;  // 空间分配失败
    
    L.length = 0;              // 初始时线性表为空
    L.listsize = LIST_INIT_SIZE; // 初始化容量
    return OK;

    /********** End **********/
}


int main()
{
SqList L;
int i,j;
scanf("%d",&i);
if (!i)
	{ 
	L.elem=NULL;
	j=InitList(L);
    if (L.elem==NULL)
    	printf("可能没有正确分配元素空间");
    if (L.length)
    	printf("未正确设置元素个数初始值");
    if (L.listsize!=LIST_INIT_SIZE)
    	printf("未正确设置元素空间容量");
    if (j==OK) {
               printf("OK");
               L.elem[0]=1;
               L.elem[L.listsize-1]=2;
               }
    }
else
     {
     L.elem=(ElemType *) malloc(sizeof(ElemType));
 	 j=InitList(L);
     if (j==INFEASIBLE) printf("INFEASIBLE");
     else printf("可能会对已经存在的线性表初始化");
     free(L.elem);
     }
return 1;
}
