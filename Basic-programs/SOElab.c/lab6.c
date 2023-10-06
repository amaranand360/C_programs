#include<stdio.h>
int main()
{     int x,y;
      float rate;
      char type;
      printf("Enter the vechicle taype(car for [C] bus[B]and tampo [T]:");
      scanf("%s",&type);
      if ( type =='c' || type=='C'||type=='b'|| type=='B'|| type=='t'|| type=='T')
      {
        printf("\nEnter the hour vechicle enterd in the parking lot(0-24) :");
        scanf("%d",&x);

        printf("\nEnter the hour vechicle left the parking lot(0-24) :");
        scanf("%d",&y);
        printf("\n");
        switch (type)
        {
        case 'c':
        case 'C':if (y-x <= 2)
                {
                 rate = (y-x)*20;
            break;
                }
                 else{
                    rate = 40 + (y-x-2)*30;
            break;        
                 }
        case 't':
        case 'T':if (y-x <= 2)
                {
                 rate = (y-x)*30;
            break;
                }
                 else{
                    rate = 60 + (y-x-2)*40;
            break;        
                 }
         case 'b':
         case 'B':if (y-x <= 2)
                {
                 rate = (y-x)*40;
            break;
                }
                 else{
                    rate = 80 + (y-x-2)*50;
            break;        
                 }        
         default:
                printf("invalide input /please enter a valied input/");
            break;
        }
        printf("\n The parking fee is = %.2f",rate);
      }
      else{
        printf("invalide input /please enter a valied input/");
      }
   return 0; 
}