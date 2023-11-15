#include<stdio.h>
int main(){
	int id,air,noms,i=1;
	float pa;
	printf("nhap so tien ban da gui: ");
	scanf("%d",&id);
	printf("nhap lai suat nam: ");
	scanf("%d",&air);
	printf("nhap so thang ban gui: ");
	scanf("%d",&noms);
	printf("Thang      | Tien gui            | Lai suat       \n");
	pa=0;
	do{
		id=id+pa;
		pa=id*air/100/12;
		printf("%d           | %d               | %.1f             \n",i,id,pa);
		i++;
	}while(i<=noms);
}
