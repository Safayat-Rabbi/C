#include<stdio.h>
int main()
{
    int a,b,i,n,temp;
    scanf("%d",&n);
    while(n--)
    {
        int sum=0;
        scanf("%d %d",&a,&b);

        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        for(i=a+1;i<b;i++)
            if(i%2!=0)
        {
            sum+=i;
        }
        printf("%d\n",sum);
    }
    return 0;
}
