#include<stdio.h>
int main()
{
    int num,flag=0,temp;
    printf("enter any number:\n");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        temp/=10;
        flag++;
    }
    printf("the no. of digits in %d = %d\n",num,flag);
    return 0;
}
