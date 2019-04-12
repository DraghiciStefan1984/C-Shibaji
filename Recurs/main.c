#include <stdio.h>
#include <stdlib.h>

void towersOfHanoi(int numOfDiscs, int source, int auxilliary, int destination)
{
    if(numOfDiscs==1)
    {
        printf("Move the disc from tower no. %d to tower no. %d\n", source, destination);
        return;
    }
    towersOfHanoi(numOfDiscs-1, source, destination, auxilliary);
    towersOfHanoi(1, source, auxilliary, destination);
    towersOfHanoi(numOfDiscs-1, auxilliary, source, destination);
}

int main()
{
    towersOfHanoi(3, 1, 2, 3);
    return 0;
}
