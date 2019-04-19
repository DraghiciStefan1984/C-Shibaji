#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

int sum(int a, int b)
{
    return a+b;
}

//variable number of args
int varSum(int count, ...)
{
    int s=0;
    va_list args;

    va_start(args, count);
    int i;
    for(i=1; i<count; i++)
    {
        s+=va_arg(args, int);
    }
    va_end(args);

    return s;
}

//variable number of args of variable formats
int varTypes(char *format, ...)
{
    double s=0;
    va_list args;
    va_start(args, format);
    int i;
    for(i=1; i<strlen(format); i++)
    {
        char ch=format[i];
        switch(ch)
        {
        case 'i':
            s+=va_arg(args, int);
            break;
        case 'd':
            s+=va_arg(args, double);
            break;
        case 'f':
            s+=va_arg(args, float);
            break;
        }

    }
    va_end(args);

    return s;
}

int main()
{
    int k=sum(20, 30);
    printf("%d\n", k);
    int l=varSum(5,2,6,5,3,5);
    printf("%d\n", l);
    return 0;
}
