/********************************
 *						        *
 * 文件夹: ▲02 线性表          *
 * 							    *
 * 文件名: StaticLinkedList.h   *
 * 							    *
 * 内  容: 静态链表相关操作列表 *
 *                              *
 ********************************/

/*━━━━━━━━━━━━━━━━━━━━━━━━┓
★备注：                                          ┃
★1.为操作方便，特为申请到的空间段设一“头结点”。┃
★2.模拟系统动态申请空间过程。                    ┃
★3.个别操作会与严蔚敏数据结构课本有所差异。      ┃       
┗━━━━━━━━━━━━━━━━━━━━━━━━*/ 

#ifndef STATICLINKEDLIST_H
#define SRARICLINKEDLIST_H

#include<stdlib.h>                         // 提供malloc/realloc/free/exit原型
#include "../../ch1_Prow/Status.h"         // 绪论

/* 宏定义 */
#define MAXSIZE 1000                       // 静态链表的最大长度

/* 静态链表定义 */
typedef int SLinkList;
typedef int LElemType_S;                   // 静态链表类型
typedef struct{
    LElemType_S data;
    int cur;                               // cur是游标，做指针用，区别于数组下标 
}Component[MAXSIZE];                       // 链表空间类型

/* 全局变量 */
Component SPACE;                           // 静态链表空间

/* 静态链表函数列表 */
/* ************** */

/* 算法2.14：将一维数组SPACE中各分量链成一个大的备用空间 */
void InitSpace_SL();

/* 算法2.15：为插入数据申请空间 */
int Malloc_SL();

/* 算法2.16：将下标为k 的空闲结点回收 */
void Free_SL(int k);

/* 初始化静态链表，建立头结点 */
int InitList_SL(SLinkList *H);

/* 置空 */
Status ClearList_SL(SLinkList H);

/* 删除 */
void DestoryList_SL(SLinkList *H);

/* 判空 */
Status ListEmpty_SL(SLinkList H);

/* 求长 */
int ListLength_SL(SLinkList H);

/* 取值 */
Status GetElem_SL(SLinkList H, int i, LElemType_S *e);

/* 算法2.13：返回元素e的位置 */
int LocateElem_SL(SLinkList H, LElemType_S e);

/* 前驱 */
Status PirorElem_SL(SLinkList H, LElemType_S cur_e, LElemType_S *pre_e);

/* 后继 */
Status NextElem_SL(SLinkList H, LElemType_S cur_e, LElemType_S *next_e);

/* 插入 */
Status ListInsert_SL(SLinkList H, int i,LElemType_S e);

/* 删除 */
/* 为什么插入e的入参非指针，删除的入参e为指针？？？ */
Status ListDelete_SL(SLinkList H, int i, LElemType_S *e);

/* 访问 */
Status ListTraverse_SL(SLinkList H, void(Visit)(LElemType_S));


#endif