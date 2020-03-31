#include <stdio.h>
#include <stdlib.h>
#define boyut 30
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char karakter_at(char *a,char *array){
	int i,j;
	;
	for(i=0;a[i]!='\0';i++){
		if(a[i]==harf)
		break;
		array[i]=a[i];
		}
		i++;
		{
			for(j=i;a[j]!='\0';j++){
				array[j]=a[i];
				i++;
			}
		}
	for(i=0;array[i]!='\0';i++)
	printf("%s",array[i]);
}


int main() {
	char a[boyut];
	char array[boyut];
	char index;
	printf("Char dizinizi giriniz:");
	scanf("%s",a);
	printf("Atmak istediginiz char:");
	scanf("%s",array);
	karakter_at(a,array);
	
	
	
	
	return 0;
}
