#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct ogr{
    int id;
    int grade1;
    int grade2;
    int grade3;
};

void sort(char *param1, char *param2);



int main()
{
    char *input_file = "input.txt";
    char *output_file = "output.txt";

    printf("sorting ...\n");

    sort(input_file, output_file);

    return 0;
}
void sort(char *param1, char *param2){
	int i,j,size;
	FILE *dosya;
	struct ogr temp;
	dosya=fopen(param1,"r");
	fscanf(dosya,"%d",&size);
	struct ogr stu[size];
	
	for(i=0;i<size;i++){
		fscanf(dosya,"%d %d %d %d",&stu[i].id,&stu[i].grade1,&stu[i].grade2,&stu[i].grade3);
	}
	fclose(dosya);
	
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(stu[i].id>stu[j].id){
				temp=stu[i];
			    stu[i]=stu[j];
			    stu[j]=temp;
			}
			
		}
	}
	dosya=fopen(param2,"w");
	
	
	for(i=0;i<size;i++){
		fprintf(dosya,"%d %d %d %d\n",stu[i].id,stu[i].grade1,stu[i].grade2,stu[i].grade3);
	}
	fclose(dosya);
	
}
