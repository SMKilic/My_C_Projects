#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	FILE *dosya;
	dosya=fopen("matris_topla.txt","w");
	int i,j;
    int matris[2][2]={{1,2},{3,4}};
    int matris2[2][2]={{5,6},{7,8}};
    fprintf(dosya,"Ýlk matris;\n");
    for(i=0;i<2;i++){
    	for(j=0;j<2;j++)
    	     	fprintf(dosya,"%d\t ",matris[i][j]);
    	     	fprintf(dosya,"\n");
	}fprintf(dosya,"\n");
	
	fprintf(dosya,"Ýkinci matris;\n");
	
	for(i=0;i<2;i++){
		 for(j=0;j<2;j++)
    	     	fprintf(dosya,"%d\t ",matris2[i][j]);
    	     	fprintf(dosya,"\n");
	}fprintf(dosya,"\n");
	
	fprintf(dosya,"Matrislerin toplamý;\n");
    	    
    	     
    for(i=0;i<2;i++){
    	for(j=0;j<2;j++){
    		matris[i][j]+=matris2[i][j];
    		fprintf(dosya,"%d\t",matris[i][j]);
		}
		fprintf(dosya,"\n");
	}
	 
	fclose(dosya);
	return 0;
}
