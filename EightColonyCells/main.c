#include <stdio.h>
#include <stdlib.h>

#define SIZE 8

void printArray(int arr[], int n)
{
    printf("\n[");
    int i;
    for(i=0; i<n; i++)
    {
        if(i!=n-1)
        {
            printf("%4d|", arr[i]);
        }
        else
        {
            printf("%4d]", arr[i]);
        }
    }
    printf("\n");
}

void eightColonyCell(int arr[], int days)
{
    int d=1;
    int i;
    int temp[SIZE];
    int left, right;
    while(d<=days)
    {
        for(i=0; i<SIZE; ++i)
        {
            left=(i==0)?0:arr[i-1];
            right=(i==SIZE-1)?0:arr[i+1];
            temp[i]=(left==right)?0:1;
        }
        for(i=0; i<SIZE; i++)
        {
            arr[i]=temp[i];
        }
        printf("Situation after day: %d\n", d);
        printArray(arr, SIZE);
        ++d;
    }
}

int main()
{
    int arr[]={1,0,0,1,1,1,0,1};
    eightColonyCell(arr, 4);
    return 0;
}
