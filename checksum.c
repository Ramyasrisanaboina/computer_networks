#include<stdio.h>
#include<string.h>
int main()
{
char a[20],b[20];
char sum[20],cp[20];
int len,i;
printf("Enter first binary string : \n");
scanf("%s",&a);
printf("Enter second binary string :\n");
scanf("%s",&b);
if(strlen(a)==strlen(b))
{
len = strlen(a);
char carry ='0';
for(i=len-1;i>=0;i--)
{
if(a[i]=='0' && b[i]=='0' && carry=='0')
{
sum[i] ='0';
carry = '0';
}
else if(a[i]=='0' && b[i]=='0' && carry=='1')
{
sum[i] ='1';
carry = '0';
}
else if(a[i]=='0' && b[i]=='1' && carry=='0')
{
sum[i] ='1';
carry = '0';
}
else if(a[i]=='0' && b[i]=='1' && carry=='1')
{
sum[i] ='0';
carry = '1';
}
else if(a[i]=='1' && b[i]=='0' && carry=='0')
{
sum[i] ='1';
carry = '0';
}
else if(a[i]=='1' && b[i]=='0' && carry=='1')
{
sum[i] ='0';
carry = '1';
}
else if(a[i]=='1' && b[i]=='1' && carry=='0')
{
sum[i] ='0';
carry = '1';
}
else if(a[i]=='1' && b[i]=='1' && carry=='1')
{
sum[i] ='1';
carry = '1';
}
else
break;
}
printf("sum = %c%s\n",carry,sum);
for(i=0;i<len;i++)
{
if(sum[i]=='0')
cp[i]='1';
else
cp[i]='0';
}
if(carry=='0')
carry='1';
else
carry='0';
printf("checksum = %c%s",carry,cp);

}
else
printf("Wrong input Strings");
}
