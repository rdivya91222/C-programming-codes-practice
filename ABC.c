#include<stdio.h>
int main()
{
     int a; //a is temp in Farenheit //
     int b; //b is temp in Centigrade //
     printf("enter the temperature of a city in Farenheit \n");
     scanf("%d", & a);
     b= (a-32)*5/9;
     printf("the temperature in degree centigrade is %d", b);
     return 0;
}