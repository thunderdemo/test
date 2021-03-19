#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 80d9d7dd-7995-4ec2-bba0-66f71fcbd865");
}