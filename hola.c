#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf( "Hola mundo");
    int a[10];
    
    for(size_t i = 0; i<12; ++i){

        a[i] = i*i;
    } 
    

    for(size_t i = 0; i<12; ++i){

        printf("[%ld] = %d", i+1, a[i]);
    }
}


