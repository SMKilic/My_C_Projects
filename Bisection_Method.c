#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop x*x*x-5*x*x-2*x+10*/
double f(double x,double a, double b,double c,double d){
	return a*x*x*x+b*x*x+c*x+d;//girilen noktalarý bu fonsiyonun içine katarak sonucu buluyor her seferinde yeniden almsý için
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
	
    ortankt = (ilknkt + sonnkt)/2;//girilen iki degerin orta noktasýný buluyor.
    kokdgr = f(sonnkt,a,b,c,d);//girilen ve bulunan noktalarý fonksiyon içine koyup iþlemlerini yapýyor.
    ortdgr = f(ortankt,a,b,c,d);
    
     if (kokdgr * ortdgr >= 0)//fonksiyon sýnýrlarýný a b c diye nitelendirirsek burada b ile c arasýnda ise bu iþlemi yap dedim
     sonnkt = ortankt;
     
else ilknkt = ortankt;//fonksiyon sýnýrlarýný a b c diye nitelendirirsek burada a ile b arasýnda ise bu iþlemi yap dedim
 i++;//kaç tane ikiye bölme iþlemi yaptýgýný görmek için yazdým(iterasyon)
} //fonksiyonun degeri epsilona yaklaþana kadar aranmaya devam edecek

kok = (sonnkt+ilknkt)/2;//"-" oldugu anda döngüden çýkýp son iþlemi yapýp sonucu verecek

printf("\nFonksiyon denkleminin katsayýlarý %5.2lf *x***3 + %5.2lf *x**2 + %5.2lf *x + %5.2lf is:",a,b,c,d);
printf(" %d iterasyon sonucunda fonksiyonun kok degeri: %.10lf\n",i ,kok);
 
	return 0;
}

