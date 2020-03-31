#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main( void ) {
	
	int a,b;
	char islem_sembolu;
	printf("Islem sembolunu giriniz:%c",islem_sembolu);
    scanf("%c",&islem_sembolu);
    printf("Birinci sayiyi giriniz:%d",a);
    scanf("%d",&a);
    printf("Ikinci sayiyi giriniz:%d",b);
    scanf("%d",&b);
 switch( islem_sembolu ) {
 	case'+':
 		printf("%d %c %d = %d\n",a,islem_sembolu,b, a + b); break;
    case'-':
    	printf("%d %c %d = %d\n",a,islem_sembolu,b, a - b); break;
    case'*':
		printf("%d %c %d = %d\n",a,islem_sembolu,b, a * b); break;
	case'/':
		printf("%d %c %d = %d\n",a,islem_sembolu,b, a / b); break;
	case'%':
		printf("%d %c %d = %d\n",a,islem_sembolu,b, a % b); break;
		
	default:
	    printf("Tanimsiz sembol girdiniz!");
 
 
 
 }
	
	
	return 0;
}
