 #include<stdio.h>
 int main(){
int a;
printf("Enter  year :\n");
scanf("%d",&a);

if (a%4==0 && a%100!=0 || a%400 == 0){
   printf(" the enterd year is a leap year");
}
else{
   printf("the enterd year is not a leap year");
}
    return  0;
 }




// #include<stdio.h>
// int main(){
//     int i,n,count=0;
// printf("Enter a  number:\n");
// scanf("%d",&n);

// for ( i = 2; i <=n; i++)
// { if (n%i == 0) 
//     count = count +1;
//     if (count == 2){
//     printf("%d \n",i);
//     }
// }
// return  0;
//  }