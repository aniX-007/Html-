#include<stdio.h>

void prime(int n)
{
    int i,j,t,c,no;
    int sum=0,f=0;

    no=n;

    while(no>0)
    {
        sum=sum+(no%10);
        no/=10;
    }
    no=n;

    while(no>1)
    {
        for(i=2;i<=no;i++)
        {
            if(no%i==0)
            break;
        }
        c=0;
        t=i;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            c++;
        }
        if(c==2)
        {
            while (i>0)
            {
               f=f+(i%10);
               i=i/10; 
            }
            
        }
        no=no/t;
    }

    if(sum==f)
    printf("1");
    else
    printf("0");

}

int main()
{
    int n;
    scanf("%d",&n);

    prime(n);
}