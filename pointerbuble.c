#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void bubble(int *array,int boyut){
	int i,j,gecici;
	for(i=0;i<boyut;i++){
		for(j=0;j<boyut-1;j++){
			if(array[j]<array[j+1]){
				gecici=array[j];
				array[j]=array[j+1];
				array[j+1]=gecici;
			}
		}
		
	}
	
}

int main() {
	int dizi[]={9,6,78,32,4};
	int i;
	bubble(&dizi,size);
	for(i=0;i<size;i++){
		printf("%d\n",dizi[i]);
	}
	return 0;
}
