#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
#include<strings.h>
#include<limits.h>
int main(){
    char buff[200];
    int fd,fd1,cd;
    char filename[100];
    char file1_name[100];

    printf("Enter the file name to read:");
    scanf("%s", filename);

    fd= open(filename, O_RDWR);

    if(fd==-1){				//part(b)
        printf("Cannot open file");
    }
    else{
        cd=read(fd,buff,100);      // to read from the user given file
        printf("Content in the file is \n ");
        write(1,buff,cd);	// to write on the std output
    }
    fd.close();
}