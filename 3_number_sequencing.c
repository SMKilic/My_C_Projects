#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b,c;
	printf(" 3 tane sayi giriniz:");
	scanf("%f%f%f",&a,&b,&c);
	if( a >= b && a > c )
	printf("%f en buyuk sayidir",a);
	else if( b >= a && b >= c )
	printf("%f en buyuk sayidir",b);
	else if( c >= b && c >= a )
	printf("%f en buyuk sayidir",c);
	return 0;
}
