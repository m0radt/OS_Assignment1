#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  int mask = 3;
  
  set_affinity_mask(mask);

  while(1){
    printf("process id is: %d\n", getpid());
    // sleep(5);

  }
  exit(0,"exit affinity test");
}
