#include <studio.h>
#include <omp.h>
int main(){
  
  #pragma omp parallel num_threads(20)
  printf("HELLO WORLD FROM THREAD %d ",omp_get_thread_num());
  return 0;
}
