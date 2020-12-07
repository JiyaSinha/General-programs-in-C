#include<stdio.h>
int main()
{
    int num,ar[10],flag=0,temp,r;
    printf("enter any number:\n");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        r=temp%10;
        ar[flag]=r;
        temp/=10;
        flag++;
    }
    temp=ar[0];
    ar[0]=ar[flag-1];
    ar[flag-1]=temp;
    temp=0;
    for(int i=flag-1;i>=0;i--)
        temp=(temp*10)+ar[i];
    printf("after performing swap of 1st and last digit,\n");
    printf("%d becomes %d\n",num,temp);
    return 0;
}
