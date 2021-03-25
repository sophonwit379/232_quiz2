#include<stdio.h>
int main()
{
    int i,n,j=0,count=0,num,check[100]={1},x,show=0,res;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        num=i+1;
        if(num*num*num<=n)
        {
            check[j]=num*num*num;
        }
        if(check[j]==0)
            break;
        j++;
    }
    for(i=0; i<n; i++)
    {
        num=i+1;
        for(x=1;x<j;x++)
        {
            if(check[x]==num)
            {
                if(num==n)
                    show=1;
                count++;
            }
        }
    }
    res=n-count;
    if(show==1)
        printf("Not Cube Free");
    else
        printf("%d",res);
}
