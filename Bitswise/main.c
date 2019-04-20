#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=5;
    printf("x before shift: %d\n", x);
    x=x>>2;
    printf("x after shift: %d\n", x);

    int a=8, b=17;
    int c=a&b;
    printf("value of c is: %d\n", c);

    a=8, b=17;
    c=a|b;
    int d=a^b;
    printf("value of c is: %d\n", c);
    printf("value of d is: %d\n", d);

    int v=789;
    printf("v before shift: %d\n", v);
    v=~v;
    printf("v after shift: %d\n", v);
    return 0;
}
