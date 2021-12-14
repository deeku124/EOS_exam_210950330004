#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<string.h>

int main()
{
unsigned char buffer[256];
int fd,p;
read(fd,buffer,16);
printf("data received from p1\n");
printf("%s",buffer);
p=strlen(buffer);
printf("%d\n",p);
close(fd);
return 0;
}