#include <stdio.h>
#include <stdlib.h>

int Potencia( int x, int n )
{
    if( n == 0 ) return 1;

    return( x*Potencia( x, n-1 ) );

    //return res;
}

int main()
{
    printf( "Hola mundo\n");
    int a[10];

    for(size_t i = 0; i<12; ++i){

        a[i] = i*i;
    }


    for(size_t i = 0; i<12; ++i){

        printf("[%ld] = %d\n", i+1, a[i]);
    }

    int pot = Potencia( 100, 5);

    printf("\nElemplo de la función potencia:\n");
    printf("100 a la 5 = %d", pot);
}


