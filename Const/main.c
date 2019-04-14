#include <stdio.h>
#include <stdlib.h>

int main()
{
    //standard constant
    const double PI=3.145648;
    int x;

    int arr[]={1,2,3};

    //standard pointer
    int* standardPointer=arr;

    //the content of the value of the pointer cannot be changed
    int* const pointerToConst=arr;

    //the value dereferenced by the pointer is constant
    const int* constantPointer=x;

    const int* const superCOnstantPointer=arr;

    return 0;
}
