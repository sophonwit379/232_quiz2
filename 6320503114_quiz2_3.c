#include<stdio.h>
int main()
{
    int i,n,tmp[7],count,j=0,num,compare=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        num=i+1;
        while(num>0)
        {
            tmp[j]=num%10;
            num/=10;
            compare*=10;
            compare+=tmp[j];
            j++;
        }



    }




}
