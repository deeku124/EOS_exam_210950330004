#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<string.h>

int main()
{
int fd,p;
FILE *f;
unsigned char buffer[256];
unsigned char buff1[256];
char buff[]="macrozoospore";
f=fopen("/usr/share/dictionary.txt","w+");
while(fgets(buffer,256,f))
p=strstr(buffer,buff);
if(p)
{
printf("string is found\n");
}
write(fd,buff1,256);
printf("data sent to p2\n");
close(fd);
return 0;
}
