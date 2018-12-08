#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "mpi.h"
#define PI 3.14159265358979323846264338327

int main(int argc, char **argv){
    
      int rank, number;
      MPI_Init (&argc, &argv);
      MPI_Comm_rank (MPI_COMM_WORLD, &rank);
      MPI_Comm_size (MPI_COMM_WORLD, &number);

     // Aqui sacar el Markov que no pude hacerlo :(
    
    
    s
     MPI_Finalize(); 
    return 0;
    
}

