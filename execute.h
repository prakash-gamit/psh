#ifndef _EXECUTE_H_
#define _EXECUTE_H_


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <sys/types.h>
#include <sys/wait.h>

// execute command
// @**argv => command line arguments (including command itself)
// @bg => run in background
void execute(char **argv, const int bg);


#endif
