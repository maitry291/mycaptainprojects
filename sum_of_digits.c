#include <stdio.h>
int s=0;

int sum(int n)
{
    int r;
    r=n%10;
    s+=r;
    n=n/10;
    if(n!=0)
    sum(n);
    else
    return s;
}

int main()
{
    int a;
    printf("enter a number: ");
    scanf("%d",&a);
    sum(a);
    printf("sum of digits=%d",s);
    

    return 0;
}
