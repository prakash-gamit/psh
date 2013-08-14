#include "../execute.h"
#include <string.h>


int main()
{
    char **argv;
    char *command = malloc(32 * sizeof(char));
    char *arg1 = malloc(32 * sizeof(char));

    // Test 1
    strcpy(command, "pwd");
    argv[0] = command;
    argv[1] = (char *)NULL;

    execute(argv, 0);


    //Test 2
    strcpy(command, "ls");
    strcpy(arg1, ".");

    argv[0] = command;
    argv[1] = arg1;
    argv[2] = (char *)NULL;

    execute(argv, 0);

    return 0;
}
