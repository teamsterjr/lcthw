#include <stdio.h>
#include <string.h>
#include <ctype.h>

// forward declarations
void print_letters(char arg[], int strsize);

void print_arguments(int argc, char *argv[])
{
    int i = 0;

    for(i = 0; i < argc; i++) {
        print_letters(argv[i], strlen(*argv));
    }
}

void print_letters(char arg[], int strsize)
{
    int i = 0;

    for(i = 0; i < strsize; i++) {
        char ch = arg[i];

        if(isalpha(ch) || isblank(ch)) {
            printf("'%c' == %d ", ch, ch);
        }
    }

    printf("\n");
}

int can_print_it(char ch)
{
    return isalpha(ch) || isblank(ch);
}


int main(int argc, char *argv[])
{
    print_arguments(argc, argv);
    return 0;
}

