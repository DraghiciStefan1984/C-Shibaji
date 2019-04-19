#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    //allocate 100 bytes and store it into a int pointer variable
    p=(int*)malloc(100);

    //MALLOC
    int n;
    printf("Enter the num if integers: ");
    scanf("%d", &n);
    int* numOfInts;
    //dynamically allocate memory according the user's input and datatype
    numOfInts=(int*)malloc(n*sizeof(int));
    if(numOfInts==NULL)
    {
        printf("Unable to allocate memory.");
        exit(1);
    }

    int i;
    for(i=0; i<n; i++)
    {
        printf("Next number: ");
        scanf("%d", *(numOfInts+1));
    }
    //free the memory
    free(numOfInts);

    //CALLOC
    numOfInts=(int*)calloc(n, sizeof(int));
    if(numOfInts==NULL)
    {
        printf("Unable to allocate memory.");
        exit(1);
    }

    //REALLOC
    int newNumOfInts=n+3;
    numOfInts=(int*)realloc(numOfInts, newNumOfInts *sizeof(int));
        if(numOfInts==NULL)
    {
        printf("Unable to allocate memory.");
        exit(1);
    }

    return 0;
}
