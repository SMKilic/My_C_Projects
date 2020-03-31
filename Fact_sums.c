#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,n;
	int faktoriyel=1;
	printf("Faktoriyeli alinacak sayiyi giriniz:");
	scanf("%d",&n);
	if(n>=0){
		for(i=n;i>0;i--){
			faktoriyel*=i;
		}
		printf("Sonuc=%d",faktoriyel);
	}
	else
	  printf("0 hesaplanamaz.");
	return 0;
}
