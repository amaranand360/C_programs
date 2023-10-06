#include<stdio.h>
int main(){
    int x,y;
    printf("Enter two number:\n");
    scanf("%d %d",&x,&y);

    switch (x>y)
    {
    case 0:{
        printf("%d is maxmimum number\n",y);
        printf("%d is minimum number\n",x);
        break;
    }
    case 1:{
        printf("%d is maxmimum number\n",x);
        printf("%d is minimum number\n",y);
        break;
    }
    default:
       printf("both are equal");
        break;
    }
    return 0;
}