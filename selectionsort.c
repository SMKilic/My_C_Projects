#include <stdio.h>
#include <stdlib.h>
#define boyut 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void selection(int *a,int size){
	int i,j,min;
	
	
	for(i=0;i<size;i++){
		min=i;
		for(j=i;j<size;j++){
			if(a[min]>a[j]){
				min=j;
			}
			
		}
		int gecici;
		gecici=a[i];
		a[i]=a[min];
		a[min]=gecici;
	}
	
}

int main() {
	int dizi[]={3,1,64,32,5};
	int i;
	selection(&dizi,boyut);
	for(i=0;i<boyut;i++){
		printf("%d\n",dizi[i]);
	}
	
	
	return 0;
}
