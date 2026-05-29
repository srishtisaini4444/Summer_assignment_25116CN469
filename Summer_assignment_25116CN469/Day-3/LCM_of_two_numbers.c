#include<stdio.h>

int main()
{
    int a,b,i,lcm,facta=0,factb=0;

    printf("Enter two numbers=");
    scanf("%d%d",&a,&b);

    for(i=2;i<=a*b;i++)
    {
        facta=i%a;
        factb=i%b;

        if(facta==0 && factb==0)
        {
            lcm=i;
            break;
        }
    }

    printf("LCM=%d",lcm);

    return 0;
}