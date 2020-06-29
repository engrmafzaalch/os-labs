#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
int main(char * argv[])
{
pid_t pid, status;
pid=fork();
if(pid ==0)
{
/*Child Process replaced by ls*/
printf("CHILD\n");
execl("/bin/mkdir","mkdir", 
"/media/engrmafzaalch/New Volume/ssd/Fourth Semester/OS/labs/lab-8/dir", 
"/media/engrmafzaalch/New Volume/ssd/Fourth Semester/OS/labs/lab-8/dir2", 
"-p",NULL); 
}


execl("/bin/mkdir","mkdir", 
"/media/engrmafzaalch/New Volume/ssd/Fourth Semester/OS/labs/lab-8/dir", 
"/media/engrmafzaalch/New Volume/ssd/Fourth Semester/OS/labs/lab-8/dir2",NULL); 
}
else if (pid >0)
{
/*Parent Process replaced by date*/
wait(&status);
printf("Parent!!!\n");
execl("/bin/ls","ls", "-l", NULL); 
}
}