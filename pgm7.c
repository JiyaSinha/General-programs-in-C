#include<stdio.h>
int main()
{
    char binary[9],binary1[9],binary2[9];
    int carry=1;
    printf("Enter any 8-bit binary number:\n");
    gets(binary);
    int i;
    for(i=0;i<=8;i++)
    {
        if(binary[i]=='1')
            binary1[i]='0';
        else if(binary[i]=='0')
            binary1[i]='1';
    }

     binary1[9] = '\0';
    for(i=8; i>=0; i--)
    {
        if(binary1[i] == '1' && carry == 1)
        {
            binary2[i] = '0';
        }
        else if(binary1[i] == '0' && carry == 1)
        {
            binary2[i] = '1';
            carry = 0;
        }
        else
        {
            binary2[i] = binary1[i];
        }
    }
    binary2[8] = '\0';
    printf("1s complement: %s\n",binary1);
    printf("2s complement: %s\n",binary2);
    return 0;
}

