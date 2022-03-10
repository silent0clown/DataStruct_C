/**********************************
 *							      *
 * 文件夹: ▲02 线性表            *
 * 							      *
 * 文件名: StaticLinkedList.c     *
 * 				     		      *
 * 算  法: 2.13、2.14、2.15、2.16 * 
 *                                *
 **********************************/
#ifndef STATICLINKEDLIST_C
#define STATICLINKEDLIST_C

#include "StaticLinkedList.h"


/* 算法2.14：将一维数组SPACE中各分量链成一个大的备用空间 */
void InitSpace_SL()
{
    
} 

/* 算法2.15：为插入数据申请空间 */
int Malloc_SL() 

/* 算法2.16：将下标为k 的空闲结点回收 */
void Free_SL(int k) 

/* 初始化静态链表，建立头结点 */
int InitList_SL(SLinkList *H) 

/* 置空 */
Status ClearList_SL(SLinkList H) 

/* 删除 */
void DestoryList_SL(SLinkList *H) 

/* 判空 */
Status ListEmpty_SL(SLinkList H) 

/* 求长 */
int ListLength_SL(SLinkList H) 

/* 取值 */
Status GetElem_SL(SLinkList H, int i, LElemType_S *e) 

/* 算法2.13：返回元素e的位置 */
int LocateElem_SL(SLinkList H, LElemType_S e) 

/* 前驱 */
Status PirorElem_SL(SLinkList H, LElemType_S cur_e, LElemType_S *pre_e) 

/* 后继 */
Status NextElem_SL(SLinkList H, LElemType_S cur_e, LElemType_S *next_e) 

/* 插入 */
Status ListInsert_SL(SLinkList H, int i,LElemType_S e) 

/* 删除 */
/* 为什么插入e的入参非指针，删除的入参e为指针？？？ */
Status ListDelete_SL(SLinkList H, int i, LElemType_S *e) 

/* 访问 */
Status ListTraverse_SL(SLinkList H, void(Visit)(LElemType_S)) 

#endif