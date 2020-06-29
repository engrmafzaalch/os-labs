#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
int main()
{
pid_t pid;
pid=fork();
if(pid<0)
{
perror("fork error");
return 1;
}
else if(pid ==0)
{
    char * const argv[] = {
        "/media/engrmafzaalch/New Volume/ssd/Fourth Semester/OS/labs/OS Lab 09/sum",
         "5",
         "6",
          NULL
          };
if (execv("sum", argv) <0 )
{
perror("child fail to execute");
return 1;}}
return 0;
}