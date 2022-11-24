#include <stdio.h>
static int sum=0,rem;

int reverse(int n)
{
   if(n)
    {
      rem=n%10;
      sum=sum*10+rem;
      reverse(n/10);
   }
   else
      return sum;
}

int main(){
   int n,reversed_num;
   printf("Enter num:");
   scanf("%d",&n);
   reversed_num=reverse(n);
   printf("Reversed num is :%d",reversed_num);
   return 0;
}
