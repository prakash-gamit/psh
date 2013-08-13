#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../parse_args.h"


int main()
{
    char line[1024];
    char argv[10][64];
    int bg = 0;
    int args, i;

    bzero(argv, 10*64);

    // test 1
    strcpy(line, "test1 arg1 arg2");
    args = parse(line, argv, &bg);

    if(args != 3 && !strcmp(argv[0], "test1")
            && !strcmp(argv[1], "arg1") && !strcmp(argv[2], "argv2")){
        fprintf(stderr, "Test 1 failed.\n");
    }else{
        printf("Test 1 ... OK\n");
    }

    bzero(argv, 10*64);
    bg = 0;

    // test 2
    strcpy(line, "test2 &");
    args = parse(line, argv, &bg);

    if(args != 1 && bg != 1 && !strcmp(argv[0], "test2")){
        fprintf(stderr, "Test 2 failed.\n");
    } else{
        printf("Test 2 ... OK\n");
    }

    return 0;
}
