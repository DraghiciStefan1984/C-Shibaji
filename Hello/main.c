#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int i=10;
    double d=25.3;
    float f=235.2f;
    short s=235;
    bool b=true;
    char c='B';
    string str="This is a string";
    */

    int variable;
    //get the input from the user and store it the variable reference
    printf("Enter an int: ");
    scanf("%d", &variable);
    printf("The value you entered was: %d\n", variable);

    char ch;
    int i, j;
    printf("Enter an int: ");
    scanf("%d", &i);
    printf("Enter a char: ");
    scanf(" %c", &ch);
    printf("Enter an int: ");
    scanf("%d", &j);

    //cast to double
    float x=(float)i/j;
    printf("%f", x);

    printf("");
    return (EXIT_SUCCESS);
}
