#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int dizikopyalama(char *dizi1,char harf){
	int i,sayi=0;
	for(i=0;*(dizi1+i)!='\0';i++){
		if(harf==*(dizi1+i)){
			
			sayi++;
		}
		
		}
	return sayi;
}


int main() {
	char dizi[]={"bugun gunlerden pazar."};
	
	char index;
	printf("Sayilacak harf :");scanf("%c",&index);
	printf("%d",dizikopyalama(&dizi,index));
	
    
	
	
	return 0;
}
