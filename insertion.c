#include <stdio.h>
#include <stdlib.h>
#define boyut 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void insertion(int *a,int size){
	int i,j,min,gecici;
	for(i=1;i<size;i++){
		min=a[i];
		j=i-1;
		for(j>=0;a[j]>min;j--){
			a[j+1]=a[j];
			
		}
		a[j+1]=min;
	}
}

int main() {
	int dizi[]={3,1,9,6,5};
	int i;
	insertion(&dizi,boyut);
	for(i=0;i<boyut;i++){
		printf("%d\n",dizi[i]);
	}
	return 0;
}
