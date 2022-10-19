#include <stdio.h>
#include <stdlib.h>

void init(int);
void validate_argc(int);
void print_version();
void init_asm();

int main(int argc, char *argv[])
{
    init(argc);
    char *p = argv[1];
    init_asm(&p);
    
}

void init(int argc)
{
    validate_argc(argc);
    print_version();
}

void validate_argc(int argc)
{
    if(argc != 2)
    {
        printf("invalid argc");
    }
}

void print_version()
{
    printf("Version 0.0.1");
}

void init_asm(char* p)
{
    printf(".intel_syntax noprefix\n");
    printf(".globl main\n");
    printf("main:\n");
}
