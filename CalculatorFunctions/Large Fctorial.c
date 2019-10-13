#include<stdio.h>
#include<string.h>
int main()
{
    long long int t,n;
    scanf("%lld",&t);
    long long int a[20000];
    long long int len,i,k,j,c,d,b;
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        for(j=0;j<20000;j++)
        a[j]=0;
        a[0]=1;
        for(j=1;j<=n;j++)
        {
            for(k=0;k<20000;k++)
            {
                a[k]=a[k]*j;
            }
            for(k=0;k<20000;k++)
            {
                b=a[k];
                a[k]=b%10;
                a[k+1]=a[k+1]+b/10;
            }
            
        }
        for(j=19999;j>=0;j--)
        {
            if(a[j]!=0)
            {
                c=j;
                break;
            }
        }
        for(j=c;j>=0;j--)
        {
            printf("%lld",a[j]);
        }
        printf("\n");
    }
}