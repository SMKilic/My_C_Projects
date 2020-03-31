#include <stdio.h>
#include <stdlib.h>
#define BOYUT 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void sirala(int dizi[],int boyut){
	int i,j,gecici;
	for(i=0;i<boyut;i++){
		printf("%d.sayiyi giriniz=",i+1);scanf("%d",&dizi[i]);
		
	}
	for(i=0;i<boyut;i++){
		for(j=0;j<boyut-1;j++){
		
		if(dizi[j]>dizi[j+1]){
			gecici=dizi[j];
			dizi[j]=dizi[j+1];
			dizi[j+1]=gecici;
		}
		}
	
	}
	for(i=0;i<boyut;i++){
		printf("%d\n",dizi[i]);
	}
}

int main() {
	int siragost[BOYUT];
	
	
	sirala(siragost,BOYUT);

	return 0;
}
