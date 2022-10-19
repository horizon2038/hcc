#include <stdio.h>
#include <stdlib.h>

void init(int);
void validate_argc(int);
void print_version();
void init_asm();

int main(int argc, char *argv[])
{
    init(argc);
    init_asm();
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
        return 1;
    }
}

void print_version()
{
    printf("Version 0")
}
