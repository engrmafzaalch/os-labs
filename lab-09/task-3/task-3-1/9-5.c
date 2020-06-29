#include<stdio.h>
#include<stdlib.h>
void main(int argc , char * argv[])
{
int i,mul=1;
if(argc!=5)
{
printf("Arguments not valid!");
exit(1);
}
printf("The Multiplication is : ");
for(i=1;i<argc;i++)
mul = mul * atoi(argv[i]);
printf("%d",mul);
}