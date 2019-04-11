#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int intArray[100];
    int i;
    for(i=0;i<100;i++)
    {
        intArray[i]=i;
        printf("%d,", intArray[i]);
    }

    printf("\n");

    int n;
    printf("Enter the num of elements: ");
    scanf("%d", &n);
    int x[n];
    int k;
    srand(time(NULL));

    for(k=0;k<n;k++)
    {
        x[k]=rand()%100;
    }
    printf("The content of the array is:\n");
    for(k=0;k<n;k++)
    {
        printf("%d,", x[k]);
    }

    return 0;
}
