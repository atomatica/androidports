#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main(void) {
    printf(
        "         UID           GID  \n"
        "Real      %d  Real      %d  \n"
        "Effective %d  Effective %d  \n",
            getuid (),    getgid (),
            geteuid(),    getegid());
    return 0;
}

