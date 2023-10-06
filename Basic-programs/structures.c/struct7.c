#include<stdio.h>
struct student{
int sno;
char sname[30];
float marks;
}s,*st;
int main ( )
{
//struct student s;
//struct student *st;

printf("enter USn, sname, marks:");
scanf ("%d %s %f", & s.sno, s.sname, &s.marks);
st = &s; // assign address of s struct to st it’s struct pointer example.
printf ("details of the student are\n");
printf ("Number = %d\n", st ->sno);
printf ("name = %s\n", st->sname);
printf ("marks =%.2f\n", st ->marks);
return 0;
}