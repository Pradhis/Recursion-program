#include<stdio.h>
int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    int n;
    printf("Enter num:");
    scanf("%d",&n);
    printf("factorial of num is %d is %d",n,fact(n));
}
