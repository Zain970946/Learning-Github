#include<iostream>
#include<omp.h>
int main()
{
    std::cout<<"Welcome to mutithreading with omp "<<std::endl;

    omp_set_num_threads(3);

    #pragma omp parallel
    {
        std::cout<<"Hello from thread number : "<<omp_get_thread_num()<<std::endl;
    }
}