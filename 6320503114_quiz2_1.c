#include<stdio.h>
int main()
{
    int i,n,j=0,count=0,num,check[1000]={1},x,res;
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
            if(num%check[x]==0)
            {
                count++;
                break;
            }
        }
    }
    res=n-count;
    printf("%d\n",res);



}
