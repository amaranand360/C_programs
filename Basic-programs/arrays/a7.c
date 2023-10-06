//linear search
#include <stdio.h>
int main()
{
    int i, n, targeat, pos, arr[10];
    printf("Enter size of array");
    scanf("%d", &n);
    printf("Enter element of array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The element of array\n");
    for (i = 0; i < n; i++)
    {
        printf("\t%d", arr[i]);
    }
    printf("\nEnter the value of element which want to search:");
    scanf("%d", &targeat);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == targeat)
        {
            pos = i + 1;
            printf("tne position of %d is at %d\n", targeat, i + 1);
            break;
        }
    }
    return 0;
}