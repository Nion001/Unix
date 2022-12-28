#include <iostream>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

using namespace std;
int main ()
{

int fd=open("second",O_RDONLY);
cout<<"Моя вторая программа, файловый дискриптор="<<" "<<fd<<endl;
return 0;
}

