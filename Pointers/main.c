#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void doWork(int a, int b, int c, int * sum, int * maximum)
{
    *sum=a+b+c;

    if(a>b && a>c)
    {
        *maximum=a;
    }
    else if(b>a && b>c)
    {
        *maximum=b;
    }
    else
    {
        *maximum=c;
    }
}

int main()
{
    int var=8;
    int* pVar=&var;
    //print the address of var
    printf("%p\n", &var);
    printf("%d\n", var);
    printf("");
    //modify the value contained in the address pointed by the pointer
    *pVar=10;
    *pVar++;
    printf("%d\n", var);

    int x=88;
    int y=45;
    swap(&x, &y);
    printf("%d, %d\n", x, y);

    int a=89, b=48, c=88, sumOfElems, maximumElem;
    doWork(a, b, c, &sumOfElems, &maximumElem);
    printf("Sum=%d, Max=%d\n", sumOfElems, maximumElem);

    return 0;
}
