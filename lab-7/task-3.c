#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
#include<strings.h>
#include<limits.h>
int main(){
    int fd;
    char buffer[80];

    fd = open("chk.txt",O_RDWR | O_CREAT);
    if (fd != -1){
        printf("chk.txt file opened for read/write access\n");

        read(0, buffer, 60);
        printf("\n\n");
        write(fd, buffer, 60);
        printf("\n\n");
        printf("\n %s written to myfile \n", buffer);
        close (fd);
    }
    else
    printf("error");

}