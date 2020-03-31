#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
/*	int f,g,sonuc;
	f=2;g=4;
	sonuc=topla(f,g,sonuc);
	printf("%d\n",sonuc);*/
	int uzun=0,uzun1=0,i,j,x;
	char dizi[10];
	char dizi1[10];
	printf ("ilk ismi yazýnýz.\n");
	scanf("%s",dizi);
	printf("ikinci ismi yazýnýz.\n");
	scanf("%s",dizi1);
	for(i=0;dizi[i]!='\0';i++)
	{
		uzun++;
	}
	for(j=0;dizi1[j]!='\0';j++)
	{
		uzun1++;
	}
	char dizi2[uzun+uzun1];
	for(i=0;i<uzun;i++)
	{
		dizi2[i]=dizi[i];
	}
	for(j=0;j<uzun1;j++)
	{
		dizi2[j+uzun]=dizi1[j];
	}
	for(x=0;dizi2[x]!='\0';x++)
	{
		printf("%c",dizi2[x]);
	}
	return 0;
}/*
void topla(int a,int b,int c)
{

	c=a+b;
}*/
