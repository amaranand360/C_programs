#include <stdio.h>
struct medical_inventory
{ int code;
char des[25];
float qty;
float uc;
float gst;
float tp;
float dis;
} med[10];
 void medicin();
 void print_receipt();
 int main(){
   // printf("Enter number of medicines");
   // scanf("%d",&n);
    printf("Medical receipt\n\n");
    medicin();
    print_receipt();
    return 0;
}
void medicin(){
     for(int i = 0;i<2;i++)
    {
    printf("Enter code, description, qty, unit cost, gst[%],and discount[%] of medicines requested:");
    scanf("%d %s %f %f %f %f",&med[i].code,&med[i].des,&med[i].qty,&med[i].uc,&med[i].gst,&med[i].dis);
    med[i].tp = (med[i].qty * med[i].uc);
    med[i].tp = med[i].tp * (1 + med[i].gst/100);
    med[i].tp = med[i].tp *(1 - med[i].dis/100);
    }
}
 void print_receipt(){
     float total;
    printf("code\t description\t qty\t unit cost\t gst\t discount\t Total cost \n\n");
     for(int i = 0;i<1;i++)
    {  
    printf("%d\t%s\t\t%.2f\t%.2f\t\t %.2f\t\t %.2f\t%.2f\n",med[i].code,med[i].des,med[i].qty,med[i].uc,med[i].gst,med[i].dis,med[i].tp);
      total+=med[i].tp;
    }
    printf("Grand Total = %f\n", total);

}