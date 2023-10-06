 #include<stdio.h>
int main(){
     int a,b,c,max;
    printf("Enter 3 numbers: \n");
    scanf("%i %i %i",&a,&b,&c);

   max=(a>b && a>c)? a:(b>c && b>a)? b: c;
printf("the greatest number is :%i\n",max);
return 0;
}

//     max = a;
//       if(b>max) max=b;
//      if(c>max) max=c;

//     printf("the greatest number is :%i",max);
    
// return 0;
// } 

//  #include<stdio.h>
// int main(){
//      float a,b,c;
//     printf("Enter 3 numbers: \n");
//     scanf("%f %f %f",&a,&b,&c);
//     if (a>=b && a>=c ) {
//         printf("the greatest number is :%f",a);      
//     }  else if(b>=c && b>=a) {
//     printf("the greatest number is :%f",b);
//     } else if(c>=a && c>=b){
//     printf("the greatest number is :%f",c);
//     } 
// else {
//     printf("the nums are invalide :");
    
// }
// return 0;
// } 

