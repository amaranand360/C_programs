 #include<stdio.h>
 #include<math.h>
 int main()
 {    float a,b,c,D,r1,r2,realpart,impart;
      
     printf("Enter the coffcient of a,b and c:\t");
     scanf("%f %f %f",&a,&b,&c);
     D = (b*b - (4*a*c));
     r1 = (-b + sqrt(D))/2*a;
     r2 = (-b - sqrt(D))/2*a;
     printf("\nthe value of discriment is %f",D);
     if (D > 0)
     {
        printf("\n the value of root1 = %.2f and root2 = %.2f",r1,r2);
     }
     else if (D == 0)
     {
        printf("\n here both root are equal and value of root1 = root2 = %.2f",r1);
     }
     else{
        realpart = -b/(2*a);
        impart = sqrt(-D)/(2*a);
        printf("\n root1 = %.2f + %.2f and root2 = %.2f - %.2f",realpart,impart,realpart,impart);
     }
    return 0; 
 }