#include "parse_args.h"


int parse(char *input, char argv[][64], int *bg)
{
    char *delim = " \t\n";
    char *token = strtok(input, delim);
    int num_args = 0;

    while(token != NULL){
        if(!strcmp(token, "&")){
            *bg = 1; // run in background
            break;
        }

        strcpy(*argv++, token);
        num_args++;
        token = strtok(NULL, delim);
    }
    // end argument list
    strcpy(*argv, "\0");

    return num_args;
}
