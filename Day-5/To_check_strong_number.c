#include<stdio.h>

int main()
{
    int n,temp,d,i,fact,sum=0;

    printf("Enter a number=");
    scanf("%d",&n);

    temp=n;

    while(n!=0)
    {
        d=n%10;
        fact=1;

        for(i=1;i<=d;i++)
        {
            fact=fact*i;
        }

        sum=sum+fact;
        n=n/10;
    }

    if(sum==temp)
    {
        printf("Strong number");
    }
    else
    {
        printf("Not a strong number");
    }

    return 0;
}