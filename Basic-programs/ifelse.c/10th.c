#include<stdio.h>
int main(){
    // find number odd or even
int a;
printf("Enter a (+) number:\n");
scanf("%d",&a);
//  if(a%2 == 0){
//             printf("the number is even \n");
//  }
//         else {
//             printf("the number is odd");
//         }
        // if(a%2 !=0){
        //        printf("the number is odd \n");
        //     } 
        //     else {
        //         printf("the num is even");
        //  }
        
       (a%2 == 0) ? printf("the number is even \n"): printf("the number is odd \n");      
        return 0;
}

// #include<stdio.h>
// int main(){
// int a;
// printf("enter a number:");
// scanf("%d",&a);
// if(a %97 == 0){
//     printf("Divisiable by 97 & the questant is:%d");
// }
// else{
//     printf("Not divisable by 97");
// }
// return 0;
// }