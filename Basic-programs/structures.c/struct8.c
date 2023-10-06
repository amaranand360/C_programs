#include<stdio.h>
struct student
{
   char name[30];
   int rollno;
   char branch[10];
   char seaction[5];
   char USN[15];
   float CGPA;
} s[5];
void studentinfo();
void printinfo();
int main(){
   printf("Enter the information of students\n");
   studentinfo();
   printinfo();
  return 0;
}
void studentinfo(){
    int i;
    for(i = 0;i<2;i++){
        printf("Enter tne name of %d student: ",i+1);
        scanf("%s",s[i].name); 
        printf("Enter roll no: ");
        scanf("%d",&s[i].rollno);
        printf("Enter Your branch: ");
        scanf("%s",s[i].branch);
        printf("Enter your seaction ");
        scanf("%s",s[i].seaction);
        printf("Enter Your USN: ");
        scanf("%s",s[i].USN);
        printf("Enter Eraned CGPA: ");
        scanf("%f",&s[i].CGPA);
    }
}
void printinfo(){
    for (int i = 0; i < 2; i++)
    {
    printf("Displaying informanation of %d student\n",i+1);
    printf("NAME =%s\n",s[i].name);
    printf("ROLL NO = %d\n",s[i].rollno);
    printf("BRANCH = %s\n",s[i].branch);
    printf("Seaction = %s\n",s[i].seaction);
    printf("USN = %s\n",s[i].USN);
    printf("CGPA = %.2f\n",s[i].CGPA);
    }
    
}