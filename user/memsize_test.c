#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"


int main (int args, char* argv[]){
    printf("Starting memsize test\n");
    printf("Memory used: %d\n", memsize());
    uint size = 20000;
    void *memory = malloc(size);
    if(memory == 0){
        fprintf(2, "Memory allocation failed\n"); // stderr
        exit(1, 0);
    }
    printf("Memory used after allocation: %d\n", memsize());
    free(memory);
    printf("Memory used after the release: %d\n", memsize());
    exit(0, 0);
}