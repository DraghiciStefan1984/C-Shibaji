#include <stdio.h>
#include <stdlib.h>

void printArray(int *p_arr, int arraySize)
{
    int i;
    for(i=0;i<arraySize;i++)
    {
        printf("%d,", *(p_arr+i));
    }
}

int main()
{
    int intArray[]={1,2,3,4,5,6,7,8,9};
    printf("%p, %p\n", intArray, &intArray[0]);
    int i;
    for(i=0; i<9; i++)
    {
        printf("%p -> %d\n", &intArray[i], intArray[i]);
    }

    printf("\n\n");
    printArray(intArray, 9);
    return 0;
}
