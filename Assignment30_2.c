// Write a program which display all palindrome elements from singly linked list

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

void Reverse(PNODE First)
{
	int iNode = 0;
	int iCnt = 0;
	int iDigit = 0;
	int iRev = 0;
	int iTemp = 0;
	
	iNode = Count(First);
	
	for(iCnt = 1;iCnt <= iNode;iCnt++)
	{
		iRev = 0;
		iTemp = First->data;
		
		while(First->data != 0)
		{
			iDigit = First->data % 10;
			iRev = (iRev * 10) + iDigit;
			First->data = First->data / 10;
		}
		
		if(iRev == iTemp)
		{
			printf("%d\t",iTemp);
		}
		
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
	InsertFirst(&Head,21);
	InsertFirst(&Head,1221);
	InsertFirst(&Head,3);
	InsertFirst(&Head,989);
	
	Display(Head);
	
	iRet = Count(Head);
	printf("Number of nodes in linked list are : %d\n",iRet);
	
	Reverse(Head);

	return 0;
}
