#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;

    if (argc == 1) {
        printf("%s is your only argument", argv[0]);
    }
    else if(argc == 2) {
        printf("You only have one argument. You suck.\n");
    } else if(argc > 2 && argc < 4) {
        printf("Here's your arguments:\n");

        for(i = 1; i < argc; i++) {
            printf("%s ", argv[i]);
        }
        printf("\n");
    } else if (argc >=4) {
        printf("You have too many arguments. You suck.\n");
    } else if (argc == 0) {
        printf("You don't have any arguments. You suck.\n");
    }

    return 0;
}
