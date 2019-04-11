#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[]="Hello world!";
    printf("Message is: %s\n", str);

    char strFromKeys[80];
    printf("Enter your name: ");
    scanf("%s", strFromKeys);
    printf("Hello %s!\n", strFromKeys);
    int i;
    //get the length of the string
    for(i=0;i<strFromKeys[i]!='\0';i++);
    printf("The length of the string is: %d\n", i);
    printf("The length of the string is: %d\n", strlen(strFromKeys));
    return 0;
}
