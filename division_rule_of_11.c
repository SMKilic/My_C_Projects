#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int takemod(int reverse){//d1 basama��n� bulmak i�in olu�turulan fonksiyon 
	int num,i;
	int mod=0;
	
	for(i=2;i<=10;i++){//say�n�n d2si ile 2yive daha sonrakileri �arpmak i�in 
		num=reverse%10;//say�y� ters d�nd�r�yor
		reverse=reverse/10;
		num=num*i;//d2*2+d3*3...
		mod+=num;
	}  mod=mod%11;
	return mod;
}
void write(int number){//a�ag�daki mainin num�n� al�r yukar�dan modu(d1) al�r ve kontrol ederek bast�r�r
	                    
	if(takemod(number)!=0)
		printf("%d%d",number,11-takemod(number));
	
	else
	   printf("%d",number);
	
}
int main(int argc, char *argv[]) {
	
	int num;
	
	if(argc==1)//�lk arg�man dosya ad� oldugundan 
	return 0;  //d�nd�rmemesi i�in
	  
	num=atoi(argv[1]);//char degeri int'e �evvirir
	
	takemod(num);//d1'i bulmak i�in modal fonsiyonuna yollar
	write(num);//bast�r�r.

	return 0;
}
