#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double ort_bul(int dizi[] , int n);
int max_bul(int dizi[] , int n);

double covariance(int *array_1, int *array_2, double mean_1, double mean_2, int size);

    int dizi1[]={1,2,3,4,5};
    int dizi2[]={1,2,3,4,5,6,7,8,9,10};
    int dizi3[]={6,7,8,9,10};
    int dizi[]={2,2,5};

int main(){

    
    
    int n=sizeof(dizi1);
    double ort_bul_1=ort_bul(dizi);
    double ort_bul_2=ort_bul(dizi3);
    
    printf("ortalama1 =%.2f \nortalama2=%.2f\nmax1=%d \nmax2=%d \nvar1=%.2f \nvar2=%.2f",ort_bul(dizi1,5),ort_bul(dizi2,5),max_bul(dizi1,5)
	,max_bul(dizi2,5),variance(dizi1,ort_bul_1,5));


    return 0;
}
double ort_bul(int *dizi , int n){

int i;
double ort,toplam=0.0;

for(i=0;i<n;i++){

    toplam+=dizi[i];

}
ort=toplam/n;
return ort;
}
int max_bul(int *dizi , int n){
int i,max=0;
for(i=0;i<n;i++){
    if(dizi[i]>max){
        max=dizi[i];
        }
}
    return max;
}
double variance (int *dizi,double orta_bul, int n){
	int i;
	double var=0;
	for(i=0;i<n;i++){
		var=pow(dizi[i]-orta_bul,2);
	}
	return var/n;
}  
