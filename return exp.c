#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int toplam(int x,int y){
	int sonuc=0;
	sonuc=x+y;
	return sonuc;
}
int carp(int x,int y){
	int sonuc=0;
	sonuc=x*y;
	return sonuc;
}
int kareal(int x,int y){
	int sonuc=0;
	sonuc=toplam(x,y);
	return sonuc=carp(sonuc,sonuc);
}

int fact(int n){
	
	if(n!=1)
		
	 return n*fact(n-1);
 
	/*	for(i=1;i<=n;i++){
		sonuc=sonuc*i;
	}
	return sonuc;*/
}

int main() {
	int x,y,n;
	/*printf("Sayilar:");scanf("%d %d",&x,&y);
	printf("toplam=%d\n",toplam(x,y));
	printf("carpim=%d\n",carp(x,y));
	printf("TK=%d",kareal(x,y));
	//return 0;*/
	printf("Fakt alinacak sayi:");scanf("%d",&n);
	printf("%d sayisinin faktý=%d",n,fact(n));
}
