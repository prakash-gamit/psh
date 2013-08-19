#include "parse_args.h"


int parse(char *input, char **argv, int *bg)
{
    char *delim = " \t\n";
    char *token = strtok(input, delim);
    int num_args = 0;

    while(token != NULL){
        if(!strcmp(token, "&")){
            *bg = 1; // run in background
            break;
        }

        *argv++ = token;
        num_args++;
        token = strtok(NULL, delim);
    }
    // end argument list
    *argv = NULL;

    return num_args;
}
