#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sayi;
	int birler_basamagi;

	printf("Sayiyi giriniz> ");
	scanf("%d",&sayi);
	
	
	while( sayi>10 ) {
		//Say�n�n son rakam� al�n�p
		//ekrana bast�r�l�yor. 
		birler_basamagi = sayi % 10;
		printf("%d",birler_basamagi);
		//Son rakam ekrana bast�r�ld���
		//i�in say�n�n son hanesi at�l�yor.
		sayi /= 10;//burada ise her seferinde basamak say�s�nda bir azalma olur
         // �rnekle a��klayal�m: girilen say�m�z �3456� olsun
           // sayi=3456/10; �> sayi=345 olur
           // sayi=345/10; �>  sayi=34 olur
           // sayi=34/10;  �>  sayi=3 olur
           // sayi=3/10;   �>  sayi=0 olur �> ve d�ng�den ��k�lm�� olunacak
	}
	printf("Sayinin tersi:%d\n",sayi);
	return 0;
}

/*
void sayi_tersini_bul( int sayi )
{
	while( sayi>0 ) {
		printf( "%d", sayi%10 );           ba�ka bir yorumla tersini alma
		sayi /= 10;
	}
	printf("\n");
}*/
