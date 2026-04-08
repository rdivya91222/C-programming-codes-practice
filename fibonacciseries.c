#include <stdio.h>

int main() {
    int n,p1=0,p2=1,p,i;
    printf("enter no. of terms required");
    scanf("%d", & n);
    for(i=1;i<=n;i++){
        if(i==1)
        p=p1;
    else if(i==2)
        p=p2;
    else{
        p=p1+p2;
        p1=p2;
        p2=p;
    }
    printf("%d ", p);
    }
    return 0;
    }