#include "../builtin.h"


int main()
{
    //Test 1
    char *command = malloc(32 * sizeof(char));

    strcpy(command, "ls");
    if(is_builtin(command) != -1){
        fprintf(stderr, "Test 1 Failed!\n");
    }else{
        printf("Test 1 ... OK\n");
    }

    //Test 2
    strcpy(command, "exit");
    if(is_builtin(command) == -1){
        fprintf(stderr, "Test 2 Failed!\n");
    }else{
        printf("Test 2 ... OK\n");
    }

    char **argv;
    char *dir = "..";
    strcpy(command, "cd");
    argv[0] = command;
    argv[1] = dir;
    argv[2] = (char *)NULL;

    //Test 3
    execute_builtin(command, argv);
    system("ls --color=always");

    return 0;
}
