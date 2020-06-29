#include<stdio.h>
#include<stdlib.h>
void main(int argc , char * argv[])
{
int i,mul=2;
if(argc!=2)
{
printf("Arguments not valid!");
exit(1);
}
printf("The %d Power of 2 is : ", atoi(argv[1]));
for(i=1;i<atoi(argv[1]);i++)
mul = mul * 2;
printf("%d",mul);
}