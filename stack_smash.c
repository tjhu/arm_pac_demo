#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static long long payload[100];

void bad() {
    printf("BREACHED\n");
    exit(-1);
}

void read_input(char* dst) {
    memcpy(dst, payload, sizeof(payload)); 
}

void do_work() {
    char buff[8];
    read_input(buff);
}

int main() {
    for (int i = 0; i < sizeof(payload)/sizeof(payload[0]); i++) {
        payload[i] = (long long)bad;
    }
    do_work();
}