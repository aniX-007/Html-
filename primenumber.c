#include<stdio.h>
#include<math.h>

int main()
{
    int a,i;
    scanf("%d",&a);
    if(a==1)
    {
        int b,arr[10];
        for(i=0;i<10;i++)
        {
            scanf("%d",&b);
            arr[i]=b;

        }
        for(i=0;i<10;i++)
        {
            printf("%d",arr[i]); 

        }
    }
    if(a==2)
    {
        int c,x,pow=10;
        scanf("%d",&c);
        scanf("%d",&x);

        for(i=1;i<=x;i++)
        {
          pow=pow*c;  
        }
        printf("%d rais to the power %d : %d",c,x,pow);

    }
    if (a==3)
    {
        int e,f,g;
        scanf("%d",&e);
        if(e%2==0)
        {
            int sum=0;
            printf("%d is even number ",e);
            printf("%d",sum);
            for(i=1;i<=20;i++)
            {
                sum=sum+2;
                printf("%d",sum);

            }
        }
        else
        {
            int sum=1;
            printf("%d is a odd number",e);
            printf("%d",sum);
            for(i=1;i<=20;i++)
            {
                sum=sum+2;
                printf("%d",sum);
            }
        
        }
    }
    else
    {
        printf("Invalid number");

    }
    return 0;

}