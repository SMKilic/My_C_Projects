#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 100
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int uzunlukbul(char *a){
	int i,uzunluk=0;
	
	for(i=0;a[i]!='\0';i++){
		uzunluk++;
	}
	return uzunluk;
}

int main() {
	char dizi[size];
	
	scanf("%s",dizi);
	printf("%d",uzunlukbul(dizi));
	
	return 0;
}
