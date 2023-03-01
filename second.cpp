#include <iostream>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>


using namespace std;
int main ()
{
 unsigned int fd;
 char  *buffer ="Привет,это данные для записи в файл";
 unsigned int count;
 int nwritten;

 count = strlen(buffer);
 fd = open("data.txt", O_WRONLY);
   if (fd==-1)
      {
      fputs("Не могу открыть файл",stdout);
      return;
      }
nwritten = write (fd, buffer, count);
printf ("\n WRITE:\n%u байтов записано в файл\n",nwritten);
close(fd);
}

