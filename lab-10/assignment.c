#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
  #include <sys/types.h>
  #include <sys/wait.h>

int main ()
{
int fd[2]; 
int pid; 

if (pipe(fd) < 0)
{perror ("PIPE CREATION ERROR");
exit(1);
}
pid = fork (); 
if (pid == 0) 
{
dup2 (fd[0],0); 
close (fd[1]); 
execlp ("tr", "tr","[:lower:]", "[:upper:]", NULL); 

}
else 
pid = fork (); 
if (pid == 0) 
{
    dup2 (fd[1],1); 
close (fd[0]); 
execlp ("/bin/ls", "ls -al", NULL); 
 
}
else 

{
close (fd[0]);
close (fd[1]);
wait(0);
wait(0);
}
}