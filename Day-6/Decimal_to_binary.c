#include<stdio.h>

int main()
{
    int n,binary=0,i=1,d;

    printf("Enter a decimal number=");
    scanf("%d",&n);

    while(n!=0)
    {
        d=n%2;
        binary=binary+d*i;
        i=i*10;
        n=n/2;
    }

    printf("Binary number=%d",binary);

    return 0;
}