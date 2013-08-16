
#ifndef _BUILTIN_H_
#define _BUILTIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <unistd.h>
#include <errno.h>

#define NUM_BUILTIN_COMMANDS 3


extern char *builtin_commands[NUM_BUILTIN_COMMANDS];

// return index of command in @*builtin_commands array
// return -1 if its not builtin command
int is_builtin(char *command);


// execute builtin command
void execute_builtin(char *command, char **argv);


#endif
