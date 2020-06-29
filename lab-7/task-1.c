#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
#include<strings.h>
#include<limits.h>
int main()
{
int fd;
char buff[200];
int rd=read(0,buff,100);			//part(a)
write(1,buff,rd);
}