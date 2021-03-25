#include<stdio.h>
int main()
{
    int i,n,j,count=0,num,multi=2,check=2,show=1,com=-1;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        num=i+1;
        while(num>1)
        {
            if(num%multi==0)
            {
                if(check==multi)
                    count++;
                else
                    count=0;
                num/=multi;
                check=multi;
                if(count==3)
                    break;
            }
            else
                multi++;
        }
        if(count<2)
        {
            show++;
        }
        multi=2;
        check=2;
        count=0;
    }
    printf("\n%d",show);



}
