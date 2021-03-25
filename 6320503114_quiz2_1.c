#include<stdio.h>
int main()
{
    int i,n,j,count=0,num,multi=2,check=2;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        num=i+1;
        while(num>0)
        {
            if(num%2==0)
            {
                num/=2;
                if(check==multi)
                    count++;
            }
            else
                multi++;
            check=multi;
        }
        multi=2;
        count=0;
    }




}
