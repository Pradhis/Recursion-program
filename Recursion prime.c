#include<stdio.h>
#include<stdlib.h>

int Prime(int i,int num)
{
    if(num==i)
        return 0;
    else
        if(num%i==0)
            return 1;
    else{
        return Prime(i+1,num);
    }
}
int main()
{
    int num;
    printf("Enter num:");
    scanf("%d",&num);

    if(Prime(2,num)==0)
        printf("Prime Number");
    else
        printf("not a Prime Number");
}
