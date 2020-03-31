#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void sayisal_loto(int satir,int kolon){
	int i,j;
	srand(time(NULL));
	for(i=0;i<satir;i++){
		for(j=0;j<kolon;j++){
			printf("%d\t",1+rand()%45);
		}
		printf("\n");
	}
}



int main(){
	int satir,kolon;
	printf("Satir sayisini giriniz:");scanf("%d",&satir);
	printf("kolon sayisini giriniz:");scanf("%d",&kolon);
	sayisal_loto(satir,kolon);
	
	return 0; 
}
