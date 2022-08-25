#include<stdio.h>
int main()
{
int data[10];
int data_at_rec[10],c,c1,c2,c3,i;
printf("Enter 4 bits of data one by one : ");
scanf("%d",&data[0]);
scanf("%d",&data[1]);
scanf("%d",&data[2]);
scanf("%d",&data[4]);
data[6] = data[0]^data[2]^data[4];
data[5] = data[0]^data[1]^data[4];
data[3] = data[0]^data[1]^data[2];
printf("Encoded data is :\n");
for(i=0;i<7;i++)
{
printf("%d",data[i]);
}
printf("Enter recieved data bits one by one :\n");
for( i=0;i<7;i++)
scanf("%d",&data_at_rec[i]);
c1 = data_at_rec[6]^data_at_rec[4]^data_at_rec[2]^data_at_rec[0];
c2 = data_at_rec[5]^data_at_rec[4]^data_at_rec[1]^data_at_rec[0];
c3 = data_at_rec[3]^data_at_rec[2]^data_at_rec[1]^data_at_rec[0];
c = (c3*4)+(c2*2)+c1;
if(c==0)
printf("No error while trnsimission of data\n");
else
{
printf("Error on position %d",c);
printf("Data sent : ");
for(i=0;i<7;i++)
printf("%d",data[i]);
printf("Data recieved \n");
for(i=0;i<7;i++)
printf("%d",data_at_rec[i]);
printf("Correct Message is :\n");
if(data_at_rec[7-c]==0)
data_at_rec[7-c]=1;
else
data_at_rec[7-c]=0;
for(i=0;i<7;i++)
printf("%d",data_at_rec[i]);
}
printf("\n");
}

