#include <stdio.h>

int main(int argc, char *argv[])
{
    // create two arrays we care about
    int ages[] = {23, 43, 12, 89, 2};
    char *names[] = {
        "Alan", "Frank",
        "Mary", "John", "Lisa"
    };

    // safely get the size of ages
    int count = sizeof(ages) / sizeof(int);
    int i = 0;

    // first way using indexing
    while(i < count) {
        printf("%s has %d years alive.\n",
                names[i], ages[i++]);
    }

    printf("---\n");

    // setup the pointers to the start of the arrays
    int *cur_age = ages;
    char **cur_name = names;
    i = 0;
    // second way using pointers
    while(i < count) {
        printf("%s is %d years old.\n",
                *(cur_name+i), *(cur_age+i));
        ++i;
    }

    printf("---\n");
    i = 0;
    // third way, pointers are just arrays
    while(i < count) {
        printf("%s is %d years old again.\n",
                *(cur_name+i), *(cur_age+i));
        ++i;
    }

    printf("---\n");

    // fourth way with pointers in a stupid complex way
    int j = 0;
    for(cur_name = names, cur_age = ages;
            j < count;
            j++)
    {
        printf("%s lived %d years so far.\n",
                cur_name[j], cur_age[j]);
    }


    for (int i = 0; i < count; i++)
    {
        printf("%p name_ptr, %p age_ptr\n", (cur_name+i), (cur_age+i));
    }
    return 0;
}

