#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char karakter[30];
	int i;
	FILE *dosya;
	dosya=fopen("deneme.txt","r");
	if(dosya!=NULL){
		for(i=0;i=!feof(dosya);i++){
			fscanf(dosya,"%c",&karakter[i]);
			printf("%c",karakter[i]);
		}
		fclose(dosya);
	}
	
	return 0;
}
