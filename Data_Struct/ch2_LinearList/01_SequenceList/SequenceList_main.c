/***************************************
 *                                     *
 * 文件夹: ▲02 线性表\01 SequenceList *
 *                                     *
 * 内  容: 单链表顺序结构相关函数测试  *
 *                                     *
 ***************************************/

#include <stdio.h>
#include "SequenceList.c" 								//**▲02 线性表**//

/* 测试调用的函数原型 */
Status CmpGreater(LElemType_Sq e, LElemType_Sq data);

	//若data>e，返回TRUE，否则返回FALSE
	
void PrintElem(LElemType_Sq e);
	//测试函数，打印整型 

int main( int argc, char **argv)
{
    SqList L;
    int i;
    LElemType_Sq e;

	//1.函数InitList_Sq测试
	printf("\n<fun_1> InitList_Sq ...\n");
	{
		printf("InitList List ...\n");					 
		InitList_Sq(&L);
		printf("List Length   = %d\n",L.length);
		printf("Remaing Space = %d\n",L.listsize);
	}
	PressEnter;

	printf("\n<fun_2> ClearList_Sq ...\n");
	{
		printf("InitList List ...\n");					 
		ClearList_Sq(&L);
		printf("List Length   = %d\n",L.length);
		printf("Remaing Space = %d\n",L.listsize);

	}
	
    
    


}

Status CmpGreater(LElemType_Sq e, LElemType_Sq data)
{
	return data>e ? TRUE : FALSE;
}

void PrintElem(LElemType_Sq e)
{
	printf("%d ", e);
}