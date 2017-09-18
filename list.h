#ifndef __LIST_H__
#define __LIST_H__

struct Student {
	char name[20];
	unsigned int age;
	struct Student *next;
};

typedef struct Student* Student_Node;

Student_Node Create_List(int size);
void Print_List(Student_Node head);
void Destroy_List(Student_Node head);

#endif