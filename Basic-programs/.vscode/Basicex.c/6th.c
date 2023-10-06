// #include<stdio.h>
// int main(){
//     int choice;
//     int a  ;
      
     
//     do{
//        printf("Enter the choice\n 1=Burger\n 2=Pizza\n 3=fries\n 4=cold coffee\n");
      
//     scanf("%d",&choice);

//         switch(choice)
//         {
//             case '1':{
//             printf("Order for Burger\n");
//             break;}
//             case 2:{
//             printf("Order for pizza\n");
//             break;}
//             case 3:{
//             printf("Order for fries\n");
//             break;}
//             case 4:{
//             printf("Order for cold coffee\n");
//             break;}
//             default:{
//             printf("Invalid");}
//         }
//         printf("Do you want more item is yes 1\n");
//         scanf("%d", &a);
//     }while( a == 1);
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int a,b,c,t;
// printf("Enter a marks in math,phy& che(0-100)\n:");
// scanf("%d %d %d",&a,&b,&c);
// t=a+b+c;
// if(t >= 120 && a>=33 && b>=33 && c>=33){
//     printf("The canditate is pass");
// }
// else {
// printf("the canditate is fail");
// 
//    return 0;
// }

#include<stdio.h>
 int main()
 {
    int i,marks[5],sum = 0, avg;
     
    printf("Enter marks in order phy, che, math, Cse,Eng.[0-100] are:\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%i",&marks[i]);
        sum = sum + marks[i];
    }
    avg = sum/5;
    printf("\n The total marks = %i",sum);
       printf(" \n the presentage marks(intger part) = %i",avg);
       
    if ( avg >= 40  && avg < 60)
    {
          printf("The canditate is pass\n");
        printf("the canditate got 'E' grade\n");
    }
    else if( avg >= 60 && avg < 70)
    { 
          printf("The canditate is avarage student\n");
          printf("the canditate got 'C' grade\n");
    } 
    else if ( avg >= 70 && avg <80)
    {
          printf("The canditate is aveove avarage student\n");
          printf("the canditate got 'B' grade\n");
    } 
    else if ( avg>=80 && avg <90)
      {    
        printf("The canditate is better student\n");
        printf("the canditate got 'A' grade\n");
      }
    else if (avg>=90 && avg <=100)
      {
        printf("The canditate is outstanding student\n");
        printf("the canditate got 'o' grade\n");
      }
    else {
        printf("the canditate is fail\n");
         printf("the canditate got 'F' grade\n");
      }
       
     return 0;
  }