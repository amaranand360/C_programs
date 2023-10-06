#include<stdio.h>
#include<string.h>
struct student
{ char name[30];
  int rollno;
  int age; 
  char USN[15];
  char branch[10];
  float cgpa;
  char grade[5];
  char blodgp[5];
};

int main(){
    struct student s1 = {"AMAR KUMAR",12,18,"ENG21CS0030","CSE",9.22,"O","A+"};
    printf("The full detaiies of frist student\n");
    printf("NAME =%s\n",s1.name);
    printf("ROLL NO =%d\n",s1.rollno);
    printf("AGE =%d\n",s1.age);
    printf("USN = %s\n",s1.USN);
    printf("BRANCH =%s\n",s1.branch);
    printf("AGE =%.2f\n",s1.cgpa);
    printf("GRADE =%s\n",s1.grade);
    printf("Blod group =%s\n",s1.blodgp);

    struct student s2 = {"RISHAV SINGH",71,19,"ENG21CS0331","CSE-Al",8.45,"A+","O"};
    printf("The full detaiies of 2nd student\n");
    printf("NAME =%s\n",s2.name);
    printf("ROLL NO =%d\n",s2.rollno);
    printf("AGE =%d\n",s2.age);
    printf("USN = %s\n",s2.USN);
    printf("BRANCH =%s\n",s2.branch);
    printf("AGE =%.2f\n",s2.cgpa);
    printf("GRADE =%s\n",s2.grade);
    printf("Blod group =%s\n",s2.blodgp);
  
   struct student s3 = {"Aditya Pratap SINGH",45,20,"ENG21CS0490","CSE-DS",8.02,"A","B+"};
    printf("The full detaiies of 2nd student\n");
    printf("NAME =%s\n",s3.name);
    printf("ROLL NO =%d\n",s3.rollno);
    printf("AGE =%d\n",s3.age);
    printf("USN = %s\n",s3.USN);
    printf("BRANCH =%s\n",s3.branch);
    printf("AGE =%.2f\n",s3.cgpa);
    printf("GRADE =%s\n",s3.grade);
    printf("Blod group =%s\n",s3.blodgp);

    return 0;
}