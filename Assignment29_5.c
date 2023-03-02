// Write a program which display addition of digits of elements from singly linear linked list

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

void SumDigits(PNODE First)
{
	int iNode = 0;
	int iSum = 0;
	int iDigit = 0;
	int iCnt = 0;
	
	iNode = Count(First);
	
	for(iCnt = 1;iCnt <= iNode;iCnt++)
	{
		iSum = 0;
		while(First->data != 0)
		{
			iDigit = First->data % 10;
			iSum = iSum + iDigit;
			First->data = First->data / 10;
		}
		printf("%d\t",iSum);
		
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
	int iNode = 0;
	
	InsertFirst(&Head,512);
	InsertFirst(&Head,63);
	InsertFirst(&Head,30);
	InsertFirst(&Head,286);
	InsertFirst(&Head,999);
	
	Display(Head);
	
	iNode = Count(Head);
	printf("Number of nodes are : %d\n",iNode);
	
	SumDigits(Head);
	
	return 0;
}