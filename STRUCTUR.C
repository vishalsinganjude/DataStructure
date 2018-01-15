#include<stdio.h>

struct Student
{
	int rollno;
	struct Student *name;
};
int main()
{
	struct Student *s;
	clrscr();
	s->rollno = 54;
	strcpy(s->name,"Vishal");
	printf("Name   : %s \nRollNo : %d",s->name,s->rollno);
	getch();
	return 0;
}