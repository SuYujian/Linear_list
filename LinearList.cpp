// LinearList.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

int main(void)
{
    unsigned int size=0;
    Student_Node head=NULL;

    printf("please input the number of the students:");
    scanf_s("%d",&size);

    head=Create_List(size);
    Print_List(head);
    Destroy_List(head);

    return 0;
}