#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void karakter_at(char *str,char chr){
	int i,j;
	for(i=0;str[i]!='\0';i++){
		if(str[i]==chr){
			for(j=i;str[j]!='\0';j++){
				str[j]=str[j+1];
			}
		}
	}
}
int main() {
	char dizi[]={"Bugun gunlerden pazar."};
	
	karakter_at(dizi,'u');
	printf("%s",dizi);
	return 0;
}
