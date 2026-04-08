#include<stdio.h>
    int main()  {
        float side_a;
        printf("enter side_a");
        scanf("%f", &side_a);
        float side_b;
        printf("enter side_b");
        scanf("%f", &side_b);
        float side_c;
        printf("enter side_c");
        scanf("%f", &side_c);
        float s = (side_a + side_b + side_c) * 0.5;
        float x = (s) * (s - side_a) * (s - side_b) * (s - side_c);
        printf("area of the triangle is : %f, area");
    return 0;
    
    }