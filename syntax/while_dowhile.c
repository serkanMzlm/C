#include<stdio.h>

int main(){
	int deger;
printf("enter a value :\n");
	scanf("%d",&deger);
		while(deger<5){
		printf("entered value = %d\n ",deger);
	
	 deger++;
	}
	printf("while failed \n");
	printf("---------> do while ");
	do{ 
	printf("\nentered value = %d",deger);
	deger ++;	
	}while(deger<5);

	return 0;
	
}
