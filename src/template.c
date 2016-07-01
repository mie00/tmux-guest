#include <unistd.h>
#include <stdio.h>
#include <config.h>

#ifndef TMUX_BIN
#define TMUX_BIN "/usr/local/bin/tmux"
#endif

int main(void)
{
    if( setregid(getegid(), getegid()) ) perror( "setgid" );
    if( setreuid(geteuid(), geteuid()) ) perror( "setuid" );
    return execl(TMUX_BIN, TMUX_BIN, "at", "-r", (char *) 0);
}
