#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int toplam(int *a,int *b){
	int top;
	top=*a+*b;
	return top;
}
int main(){
	int a,b;
	int sonuc;
	int *p1, *p2;
	p1=&a;
	p2=&b;
	printf("Sayilari giriniz:\n");
	scanf("%d %d",&a,&b);
	sonuc=toplam(p1,p2);
	printf("Toplam=%d\n",sonuc);
}

