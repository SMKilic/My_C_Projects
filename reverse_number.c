#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sayi;
	int birler_basamagi;

	printf("Sayiyi giriniz> ");
	scanf("%d",&sayi);
	
	
	while( sayi>10 ) {
		//Sayýnýn son rakamý alýnýp
		//ekrana bastýrýlýyor. 
		birler_basamagi = sayi % 10;
		printf("%d",birler_basamagi);
		//Son rakam ekrana bastýrýldýðý
		//için sayýnýn son hanesi atýlýyor.
		sayi /= 10;//burada ise her seferinde basamak sayýsýnda bir azalma olur
         // örnekle açýklayalým: girilen sayýmýz “3456” olsun
           // sayi=3456/10; —> sayi=345 olur
           // sayi=345/10; —>  sayi=34 olur
           // sayi=34/10;  —>  sayi=3 olur
           // sayi=3/10;   —>  sayi=0 olur –> ve döngüden çýkýlmýþ olunacak
	}
	printf("Sayinin tersi:%d\n",sayi);
	return 0;
}

/*
void sayi_tersini_bul( int sayi )
{
	while( sayi>0 ) {
		printf( "%d", sayi%10 );           baþka bir yorumla tersini alma
		sayi /= 10;
	}
	printf("\n");
}*/
