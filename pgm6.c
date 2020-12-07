#include<stdio.h>
int main()
{
    int n;
    printf("enter any binary number:\n");
    scanf("%d",&n);
    int flag,temp,a[20],r;
    flag=0;
    temp=n;
    while(temp!=0)
    {
        r=temp%10;
        a[flag]=r;
        flag++;
        temp=temp/10;
    }
    printf("1s complement of %d is  ",n);
    for(int i=0;i<flag;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
