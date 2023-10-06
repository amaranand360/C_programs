#include<stdio.h>
#include<string.h>

struct student
{
   int rollno;
   char name[50];
   char branch[10];
   float cgpa;
 } st1;

int main(){
   struct student st1;
        strcpy(st1.name, "Amar kumar");
        st1.rollno = 12;
        strcpy( st1.branch, "CSE");
        st1.cgpa = 9.22;
    printf("The Detalies of 1st student is given below\n");
    printf("Name :%s\n",st1.name);
    printf("Roll no :%d\n",st1.rollno);
    printf("Branch :%s\n",st1.branch);
    printf("CGPA :%.2f\n",st1.cgpa);

    struct student st2;
    strcpy(st2.name,"Savhar verma");
    st2.rollno = 64;
    strcpy(st2.branch,"ECE");
    st2.cgpa = 8.66;
    printf("The Detalies of 2st student is given below\n");
    printf("Name : %s\n",st2.name);
    printf("ROLL NO : %d\n",st2.rollno);
    printf("Branch :%s\n",st2.branch);
    printf("CGPA :%.2f\n",st2.cgpa);

    return 0;
}