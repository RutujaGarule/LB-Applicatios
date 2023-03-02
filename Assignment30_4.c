// Write a program which display smallest digit of all elements from singly linked list

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
	int data;
	struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void DisplaySmall(PNODE First)
{
	int iNode = 0;
	int iCnt = 0;
	int iDigit = 0;
	int iMin = 0;
	
	iNode = Count(First);
	
	for(iCnt = 1;iCnt <= iNode;iCnt++)
	{
		iMin = 9;
		while(First->data != 0)
		{
			iDigit = First->data % 10;
			if(iDigit < iMin)
			{
				iMin = iDigit;
			}
			First->data = First->data / 10;
		}
		printf("%d\t",iMin);
		
		First = First->next;
	}
}

void InsertFirst(PPNODE First,int no)
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
	printf("Elements of linked list are : \n");
	
	while(First != NULL)
	{
		printf("| %d |->",First->data);
		First = First->next;
	}
	printf("NULL\n");
}

int Count(PNODE First)
{
	int iCnt = 0;
	
	while(First != NULL)
	{
		iCnt++;
		First = First->next;
	}
	return iCnt;
}

int main()
{
	PNODE Head = NULL;
	int iRet = 0;
	
	InsertFirst(&Head,11);
	InsertFirst(&Head,210);
	InsertFirst(&Head,56);
	InsertFirst(&Head,23);
	InsertFirst(&Head,98);
	
	Display(Head);
	
	iRet = Count(Head);
	printf("Number of nodes in linked list are : %d\n",iRet);
	
	DisplaySmall(Head);

	return 0;
}
