#include<stdio.h>

int main()
{
    int n,d,decimal=0,i=1;

    printf("Enter a binary number=");
    scanf("%d",&n);

    while(n!=0)
    {
        d=n%10;
        decimal=decimal+d*i;
        i=i*2;
        n=n/10;
    }

    printf("Decimal number=%d",decimal);

    return 0;
}