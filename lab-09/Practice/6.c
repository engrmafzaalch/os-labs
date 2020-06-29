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
if ( execl("/home/naveedshafi/Desktop/oslab8codes/os85","os85","7","6", NULL) <0 )
{
 perror("child fail to execute ls");
 return 1;
}
}

return 0;
}
