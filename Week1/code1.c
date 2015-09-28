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

/**********************************************************/
/************ Sample code from textbook ****************/
/***** Reference from Wrox_Beginning_Linux_Programming_4th_Edition_(2008)**********/
// fred.c //
#include <stdio.h>

void fred(int arg)
{
 printf("fred: we passed %d\n",arg); 
}

//bill.c//
#include <stdio.h>
void bill(char *arg)
{
	printf("bill: we passed %s\n",arg);
}

// lib.h//
/*
This is lib.h. It declares the functions fred and bill for users*/

void bill(char *);
void fred(int);

//program.c//
#include <stdlib.h>
#include "lib.h"
int main()
{
bill("Hello World");
exit(0);
}

// Output file //
/*
bheema@bheemarajulu ~/Documents/mycodes $ gcc -c program.c
bheema@bheemarajulu ~/Documents/mycodes $ gcc -o program program.o bill.o
bheema@bheemarajulu ~/Documents/mycodes $ ./program
bill: we passed Hello World
bheema@bheemarajulu ~/Documents/mycodes $ ar crv libfoo.a bill.o fred.o
a - bill.o
a - fred.o
bheema@bheemarajulu ~/Documents/mycodes $ ranlib libfoo.a
bheema@bheemarajulu ~/Documents/mycodes $ gcc -o program program.o libfoo.a
bheema@bheemarajulu ~/Documents/mycodes $ ./program
bill: we passed Hello World
bheema@bheemarajulu ~/Documents/mycodes $ gcc -o program program.o -L. -lfoo
bheema@bheemarajulu ~/Documents/mycodes $ ldd program
	linux-vdso.so.1 =>  (0x00007ffd1bfb5000)
	libc.so.6 => /lib/x86_64-linux-gnu/libc.so.6 (0x00007f1fe66ee000)
	/lib64/ld-linux-x86-64.so.2 (0x00007f1fe6ad3000)
*/



// Here (./) tells the shell to compile from current directory.
// By default a.out that assembler output is placed in default executable path if file is executed without -o
// including files are located in /usr/local/bin and local network files are located in usr/local/bin or/opt
// for gnu libraries /usr/lib/gcc/
// for include libraries /usr/include, for non standard places include -I flag for include
// $ gcc -I/usr/openwin/include fred.c 
// type of the library:
// .a for traditional, static libraries
// .so for shared libraries (see the following)
// invoking the C compiler with the -c option, which prevents the compiler --
//from trying to create a complete program

