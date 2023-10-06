#include<stdio.h>
struct studentinfo
{  char name[50];
   int rollno;
   float CGPA;
   char seaction[5];
   char subject[10];
   char tittle[15];
   char author[15];
   int bookid;
   float price;
} stud1;
int main(){

   printf("Enter 1st student name: ");
   fgets(stud1.name,50,stdin);
   printf("Enter roll no: ");
   scanf("%d",&stud1.rollno);
   printf("Enter  Eraned CGPA: ");
   scanf("%f",&stud1.CGPA);
   printf("Enter your seaction ");
   scanf("%s",stud1.seaction);
   printf("Enter subject: ");
   scanf("%s",stud1.subject);
   printf("Enter book tittle name: ");
   scanf("%s",stud1.tittle);
   printf("Enter authore name: ");
   scanf("%s",stud1.author);
   printf("Enter the book id: ");
   scanf("%d",&stud1.bookid);
   printf("Enter book price: ");
   scanf("%f",&stud1.price);

   printf("Displaying informanation\n");
   printf("NAME = ");
   printf("%s",stud1.name);
   printf("ROLL NO = %d\n",stud1.rollno);
   printf("CGPA = %.2f\n",stud1.CGPA);
   printf("Seaction = %s\n",stud1.seaction);
   printf("Subject = %s\n",stud1.subject);
   printf("Tittle = %s\n",stud1.tittle);
   printf("Author = %s\n",stud1.author);
   printf("BOOOK id = %d\n",stud1.bookid);
   printf("Price = %.2f\n",stud1.price);
    return 0;
}