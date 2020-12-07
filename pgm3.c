#include<stdio.h>
int main()
{
    int num,flag=0,r,temp,dig[11];
    printf("enter any number:\n");
    scanf("%d",&num);
    temp=num;
    for(int j=0;j<11;j++)
        dig[j]=0;
    while(temp!=0)
    {
        r=temp%10;
        dig[r]++;
        temp=temp/10;
    }
    for(int i=0;i<11;i++)
    {
        if(dig[i]!=0)
            printf("frequency of %d in %d = %d\n",i,num,dig[i]);
    }
    return 0;
}
