#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "parse_args.h"
#include "execute.h"
#include "builtin.h"


#define MAX_COMMAND_LEN 1024

int main()
{
    char *line = malloc(MAX_COMMAND_LEN * sizeof(char));
    char **cmd;
    int bg;
    int args;

    do{
        printf("command >");
        fgets(line, MAX_COMMAND_LEN, stdin);

        if(!strcmp(line, "\0") || !strcmp(line, "\n"))
            continue;

        parse(line, cmd, &bg);
        execute(cmd, 0);
    }while(1);

    return 0;
}
