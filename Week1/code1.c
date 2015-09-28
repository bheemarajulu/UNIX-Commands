$ Hello.c

#include <stdio.h>
#include <stdlib.h>
int main()
{
printf(“Hello World\n”);
exit(0);
}

Now compile,
$ gcc -o hello hello.c
$ ./hello
output: Hello World



// Here (./) tells the shell to compile from current directory.
// By default a.out that assembler output is placed in default executable path if file is executed without -o
// including files are located in /usr/local/bin and local network files are located in usr/local/bin or/opt
// for gnu libraries /usr/lib/gcc/
// for include libraries /usr/include, for non standard places include -I flag for include
// $ gcc -I/usr/openwin/include fred.c 

