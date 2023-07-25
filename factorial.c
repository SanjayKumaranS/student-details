#include<stdio.h>

int main()
{
    int n;
    printf("\n enter a positive number :");
    scanf("%d",&n);
    if(n>=0)
    {
        printf("\n Factorial of the number %d is %d",n,fact(n));
    }
    return 0;
}
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}