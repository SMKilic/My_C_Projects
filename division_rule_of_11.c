#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int takemod(int reverse){//d1 basamaðýný bulmak için oluþturulan fonksiyon 
	int num,i;
	int mod=0;
	
	for(i=2;i<=10;i++){//sayýnýn d2si ile 2yive daha sonrakileri çarpmak için 
		num=reverse%10;//sayýyý ters döndürüyor
		reverse=reverse/10;
		num=num*i;//d2*2+d3*3...
		mod+=num;
	}  mod=mod%11;
	return mod;
}
void write(int number){//aþagýdaki mainin numýný alýr yukarýdan modu(d1) alýr ve kontrol ederek bastýrýr
	                    
	if(takemod(number)!=0)
		printf("%d%d",number,11-takemod(number));
	
	else
	   printf("%d",number);
	
}
int main(int argc, char *argv[]) {
	
	int num;
	
	if(argc==1)//Ýlk argüman dosya adý oldugundan 
	return 0;  //döndürmemesi için
	  
	num=atoi(argv[1]);//char degeri int'e çevvirir
	
	takemod(num);//d1'i bulmak için modal fonsiyonuna yollar
	write(num);//bastýrýr.

	return 0;
}
