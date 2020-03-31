#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop x*x*x-5*x*x-2*x+10*/
double f(double x,double a, double b,double c,double d){
	return a*x*x*x+b*x*x+c*x+d;//girilen noktalar� bu fonsiyonun i�ine katarak sonucu buluyor her seferinde yeniden alms� i�in
}

int main(  ) {
	int i=0;
	double a,b,c,d;
	double ilknkt, sonnkt, ortankt,ortdgr, kokdgr, kok, epsilon ;
	printf("\nFonsiyonun epsilon degerini giriniz:\n");
	scanf("%lf",&epsilon);
printf("\nDenklemin baskatsayilarini girin a,b,c,d:\n");
scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
printf("Fonksiyonun ilk ve son noktalarini giriniz:\n");
scanf("%lf %lf", &ilknkt, &sonnkt);
printf(" Girilen fonksiyon degerleri: %lf , %lf\n", ilknkt,sonnkt);
while ((sonnkt - ilknkt) > epsilon){
	
    ortankt = (ilknkt + sonnkt)/2;//girilen iki degerin orta noktas�n� buluyor.
    kokdgr = f(sonnkt,a,b,c,d);//girilen ve bulunan noktalar� fonksiyon i�ine koyup i�lemlerini yap�yor.
    ortdgr = f(ortankt,a,b,c,d);
    
     if (kokdgr * ortdgr >= 0)//fonksiyon s�n�rlar�n� a b c diye nitelendirirsek burada b ile c aras�nda ise bu i�lemi yap dedim
     sonnkt = ortankt;
     
else ilknkt = ortankt;//fonksiyon s�n�rlar�n� a b c diye nitelendirirsek burada a ile b aras�nda ise bu i�lemi yap dedim
 i++;//ka� tane ikiye b�lme i�lemi yapt�g�n� g�rmek i�in yazd�m(iterasyon)
} //fonksiyonun degeri epsilona yakla�ana kadar aranmaya devam edecek

kok = (sonnkt+ilknkt)/2;//"-" oldugu anda d�ng�den ��k�p son i�lemi yap�p sonucu verecek

printf("\nFonksiyon denkleminin katsay�lar� %5.2lf *x***3 + %5.2lf *x**2 + %5.2lf *x + %5.2lf is:",a,b,c,d);
printf(" %d iterasyon sonucunda fonksiyonun kok degeri: %.10lf\n",i ,kok);
 
	return 0;
}

