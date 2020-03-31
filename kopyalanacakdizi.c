#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void dizikopyalama(char *dizi1,char *dizi2,int sayi){
	int i;
	for(i=0;i<sayi;i++){
		
			*(dizi2)= *(dizi1+i);
			
		}
	
}


int main() {
	char dizi[]={"Bugun gunlerden pazar."};
	char diziy[50];
	int index,i;
	printf("Kopyalanacak harf sayisi:");scanf("%d",&index);
	dizikopyalama(&dizi,&diziy,index);
	for (i=0;i<index;i++){
		printf("%c",dizi[i]);
	}
	
	return 0;
}
