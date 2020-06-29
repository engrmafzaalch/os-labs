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
if (execl("/media/engrmafzaalch/New Volume/ssd/Fourth Semester/OS/labs/OS Lab 09/task-3/task-3-2/power","power","5", NULL) <0 )
{
perror("child fail to execute");
return 1;}}
return 0;
}