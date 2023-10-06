#include <stdio.h>
 int main() {
  struct DOB
{ int day;
int month;
int year;
};
struct student
{ int roll_no;
char name[30];
struct DOB date;
float fees;
};
struct student stud1;
printf("Enter student roll no:");
scanf("%d", &stud1.roll_no);
printf("Enter student name:");
scanf("%s", stud1.name);
printf("Enter student fees:");
scanf("%f", &stud1.fees);
printf("Enter student date of birth:");
scanf("%d %d %d", &stud1.date.day, &stud1.date.month, &stud1.date.year);
printf("Student record\n\n");
printf("Roll no: %d\n", stud1.roll_no);
printf("Name : %s\n", stud1.name);
printf("Fees:%f\n", stud1.fees);
printf("Date of Birth: %d / %d / %d\n", stud1.date.day, stud1.date.month,stud1.date.year); 
 return 0;
}