#include<stdio.h>
int main()
{
    int n1,n2;
    rpt:printf("enter the range within which ASCII values are to be printed:\n");
    scanf("%d%d",&n1,&n2);
    if(n1<0||n2>255)
    {
        printf("The latest ASCII values are between 0-255 ERROR!!!!\n");
        printf("please enter the values again:");
        goto rpt;
    }
    for(int i=n1;i<=n2;i++)
    {
        printf("%d is the ASCII value for %c\n",i,i);
    }
    return 0;
}
