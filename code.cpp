#include<iostream>
#include<omp.h>
int main()
{
//     Using open mp library to make many threads
    std::cout<<"Welcome to mutithreading with omp "<<std::endl;
    
//     Initializing number of threads
    omp_set_num_threads(3);
   
//     Parallel region
    #pragma omp parallel
    {
        int id=omp_get_thread_num();
        
        std::cout<<"Hello from thread : "<<id<<std::endl;
    }

    std::cout<<"After parallel region "<<std::endl;
}
