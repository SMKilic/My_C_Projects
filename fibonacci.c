#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int fibonacci( int );
int main( void )
{
	int i;
	// Fibonacci serisinin ilk 10 elemani
	// yazilacaktir.
	for( i = 0; i < 50; i++ ) {
		printf( "f(%d)= %d\n", i, fibonacci( i ) );
	}
	return 0;
}
int fibonacci( int eleman_no )
{
	if( eleman_no > 1 ) {
	return fibonacci( eleman_no - 1 ) + 
		fibonacci( eleman_no - 2 ) ;
	}
	else if( eleman_no == 1 )
		return 1;
	else
		return 0;
}
