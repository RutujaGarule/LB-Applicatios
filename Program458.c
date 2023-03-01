
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#pragma pack(1)
struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFist(PPNODE First, int no)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));
	
	newn->data = no;
	newn->next = NULL;
	
	if(*First == NULL)
	{
		*First = newn;
	}
	else
	{
		newn->next = *First;
		*First = newn;
	}
}

void Display(PNODE First)
{
	printf("Elements from the linked list are : \n");
	
	while(First != NULL)
	{
		printf("| %d |-> ",First->data);
		First = First->next;
	}
	printf("NULL \n");
}

bool LoopCheck(PNODE First)
{
	PNODE Student = First;
	PNODE Teacher = First;
	bool flag = false;
	
	while((Teacher != NULL) && (Teacher->next != NULL))
	{
		Student = Student->next;
		Teacher = Teacher->next->next;
		
		if(Student == Teacher)
		{
			flag = true;
			break;
		}
	}
	return flag;
}

int main()
{
	PNODE Head = NULL;
	bool bRet = false;
	
	InsertFist(&Head, 121);
	InsertFist(&Head, 111);
	InsertFist(&Head, 101);
	InsertFist(&Head, 51);
	InsertFist(&Head, 21);
	InsertFist(&Head, 11);
	
	bRet = LoopCheck(Head);
	if(bRet == true)
	{
		printf("There is loop\n");
	}
	else
	{
		printf("There is no loop\n");
	}
	
	
	return 0;
}