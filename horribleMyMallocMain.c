#include <stdio.h>
#include "horribleMyMalloc.h"

int main(){
  int * p = (int*)mymalloc(3*sizeof(int));
  if(p != NULL){
    *p = 2;
    *(p+1) = 4;
    *(p+2) = 6;

    for(int i = 0; i < 3; i++){
      printf("pointer Addr: %p, value Addr: %p, value: %d\n",(void*)&p + i*sizeof(int),(void*)(p+i), *(p+i));
    }
  } 
}
