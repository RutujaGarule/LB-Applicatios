//Accept division of student and depends on division display exam timing
//There are 4 divisions in school as A,B,C,D.
//Exam of division A at 7 AM,B at 8.30 AM ,C at 9.20 AM and D at 10.30 AM
//Application should be case insensitive


#include<stdio.h>

void DisplaySchedule(char ch)
{
	if((ch == 'a') || (ch == 'A'))
	{
		printf("Your Exam is at 7:00 AM\n");
	}
	else if((ch == 'b') || (ch == 'B'))
	{
		printf("Your Exam is at 8:30 AM\n");
	}
	else if((ch == 'c') || (ch == 'C'))
	{
		printf("Your Exam is at 9:20 AM\n");
	}
	else if((ch == 'd') || (ch == 'D'))
	{
		printf("Your Exam is at 10:30 AM\n");
	}
}

int main()
{
	char cValue = '\0';
	
	printf("Enter division of student\n");
	scanf("%c",&cValue);

	DisplaySchedule(cValue);
	
	return 0;
}