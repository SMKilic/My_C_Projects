#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i,j,k;
    int matris[2][2]={{1,2},{3,4}};
    int matris2[2][2]={{5,6},{7,8}};
    int mat[2][2];
    
    for(i=0;i<2;i++)
    	     for(j=0;j<2;j++)
    	     	mat[i][j]=0;
    for(i=0;i<2;i++){
    	for(j=0;j<2;j++){
    		for(k=0;k<2;k++){
    			mat[i][j]+=matris[i][k]*matris2[k][j];
    			
			}
        
		 }
    		
    		
		}
		for(i=0;i<2;i++){
			for(j=0;j<2;j++){
    	     	printf("%d ",mat[i][j]);
		            
		}
    	     
		printf("\n");
	}
	 
	return 0;
}
