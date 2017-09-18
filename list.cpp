#include "stdafx.h"

Student_Node Create_List(int size) {
	int num = 0;
	Student_Node head = NULL;
	Student_Node p1 = NULL;
	Student_Node p2 = NULL;

	if ((p1 = (Student_Node)malloc(sizeof(Student_Node))) == NULL) {
		printf("\n Can't create it, try it again in moment!\n");
		return NULL;
	}

	p2 = p1;
	head = p1;
	head->next = NULL;

	for (num = 0; num<size; num++) {
		if ((p1 = (Student_Node)malloc(sizeof(Student_Node))) == NULL) {
			printf("\n no enough memory left\n");
			return NULL;
		}

		p2->next=p1;
		printf("please input %dth name:", num+1);
		scanf_s("%s", &(p1->name), 20);
		printf("please input %dth age:",num+1);
		scanf_s("%d", &(p1->age));
		p1->next = NULL;

		p2 = p1;
	}

	p1=p2->next;
	p2=p1;

	return head;
}

void Print_List(Student_Node head) {
	Student_Node p=NULL;

	if(head != NULL){
		p=head->next;
		while(p){
			printf("%o %s %d %o\n",p,p->name,p->age,p->next);
			p=p->next;
		}
	}
}

void Destroy_List(Student_Node head) {
	Student_Node p=NULL;

	while(head){
		p=head->next;
		free(head);
		head=p;
	}
}