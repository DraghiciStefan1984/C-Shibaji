#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    age>=13 && age <=19 ? printf("Under age.") : printf("Of age.");
    return 0;
}
