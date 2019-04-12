#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double getSimpleInterest(double principalAmount, double rate, double time)
{
    double interest;
    interest=principalAmount*rate*time;
    return interest;
}

void test();

//armstring number
bool isArmstrongNumber(int);
int getTotalDigits(int);

int main()
{
    double interest=getSimpleInterest(40000, 0.05, 30);
    printf("%f", interest);
    test();

    //armstrong numbers in a range
    int i;
    for(i=0;i<5000;i++)
    {
        if(isArmstrongNumber(i))
        {
            printf("%d is an Armstrong number\n", i);
        }
    }
    return 0;
}

void test()
{
    printf("Test");
}

bool isArmstrongNumber(int number)
{
    int sum=0;
    int count=getTotalDigits(number);
    int temp=n;

    while(n>0)
    {
        sum=sum+pow(n%10, count);
        n/=10;
    }
    return temp==sum;
}

int getTotalDigits(int n)
{
    int count=0;
    while(n>0)
    {
        n/=10;
        count++;
    }
    return count;
}
