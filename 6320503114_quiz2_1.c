#include<stdio.h>
int main()
{
    int i,n,j=0,count=0,num,multi=2,check[1000]={1},show=1,com=0;
    scanf("%d",&n);
    for(i=0;i<n; i++)
    {
        num=i+1;
        if(num*num*num<=n)
        {
            check[j]=num*num*num;
        }
        printf("%d\n",check[j]);
        if(check[j]==0)
            break;
        j++;
    }
    j=1;
    for(i=0;i<n; i++)
    {
        num=i+1;
        while(num>1)
        {
            if(i%check[j]==0)
            {
                count++;
                break;
            }
            else
                j++;
        }
    }




}
