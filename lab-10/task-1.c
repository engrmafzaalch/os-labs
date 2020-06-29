#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <memory.h>
int main() {
    int p2c[2], c2p[2];
    char msg1[] = "Wherer is GEC?\n", msg2[] = "in gudlavalleru\n";
    char buffer[120];
    pipe(p2c);
    pipe(c2p);
    int proId , data;
    if((proId = fork())== -1){
        printf("Error Creating child process!!");
    }
    if(proId == 0){
        /*
        ***child process 
        ***send message from child to parent*/
        close(c2p[0]);
        write(c2p[1] , msg1 , strlen(msg1)+1);

        //recive message from parent
        close(p2c[1]);
        data = read(p2c[0] , buffer , sizeof(buffer));
        printf("%s",buffer);
    }
    if(proId !=0 ){
        /*
        ***parent process 
        ***send message from parent to child*/
        close(p2c[0]);
        write(p2c[1] , msg2 , strlen(msg2)+1);

        //recieve message from child
        close(c2p[1]);

        data = read(c2p[0] , buffer , sizeof(buffer));
        printf("%s", buffer);
    }

return 0;
}