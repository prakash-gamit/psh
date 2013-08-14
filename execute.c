#include "execute.h"


void execute(char **argv, const int bg)
{
    char *command = argv[0];

    //fork a child process
    int child_pid;
    if((child_pid = fork()) < 0){
        perror("fork");

    }else if(child_pid == 0){
        //child process = exec command
        execvp(command, argv);

    }else{
        //parent process
        //wait for child if bg = 0 else continue

        if(!bg){
            //return status of child
            int status;

            //pid of the child which terminated
            //it may not be always child_pid if some process was
            //running in the background
            int ret_pid;

            //wait for child to terminate
            ret_pid = wait(&status);
            //do something with @status and @ret_pid
        }
    }
}
