#include<stdio.h>
int main()
{
    int i,n,tmp[7],count=0,j=0,num,compare=0,num2;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

        num2=i+1;
        num=i+1;
        while(num>0)
        {
            tmp[j]=num%10;
            num/=10;
            compare*=10;
            compare+=tmp[j];
            j++;
        }
        if(compare==num2)
            count++;
        j=0;
        compare=0;
    }
    printf("%d",count);




}
