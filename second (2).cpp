#include <iostream>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>




using namespace std;
int main ()
{
 unsigned int fd;
 const char* buffer ="Привет, это новая запись в файл";
 unsigned int count;
 int nwritten;

 count = strlen(buffer);
 fd = open("data.txt", O_WRONLY);
   if (fd==-1)
      {
      fputs("Не могу открыть файл",stdout);
      return 0;
      }
nwritten = write (fd, buffer, count);
printf ("\n WRITE:\n%u байтов записано в файл\n",nwritten);
close(fd);
}

