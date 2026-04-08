#include <stdio.h>
int main() {
 int limit, n, i=1729, r, sum=0;
 printf("enter limit");
 scanf("%d", & limit);
 for(i=1729; i<=limit; i++)
 {n=i;
   while(n>0)
   {r=n%10;
    n=n/10;
    sum+=r*r*r;
   }
   if(i==sum)
   printf("%d\n", sum);
 }
 return 0;
}