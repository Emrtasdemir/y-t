#define boyut 5
#include <stdio.h>
int yigit[boyut];
int top=-1;
int dolumu(){
	if(top==boyut-1)
	return 1;
	else 
	return 0;
}
int bosmu(){
	if(top==boyut)
	return 1;
	else 
	return 0;
}
void push(int a){
	top++;
	yigit[top]=a;
}
int pop(){
	if(top==-1){
		printf("Yigit bos\n");
	}
	return yigit[top--];
}
void yazdir(){
	int i;
	for(i=0;i<=top;i++){
		printf("%d-",yigit[i]);
		
	}
}
int menu(int i){
	int m;
	if(i==1){
		printf("Bir sayi giriniz:");
		scanf("%d",&m);
		push(m);
	}
if(i==2){
	pop();


}
if(i==3){
	yazdir();
}
if(i==4){
	return 0;
}

}
main(){
	int i;
	for(i=0;i<=4;i++){
		printf("\n");
		printf("-----MENU-----\n");
		printf("EKLE=1\n");
		printf("CIKAR=2\n");
		printf("LISTELE=3\n");
		printf("CIKIS=4\n");
		printf("Bir Islem Seciniz:");
		scanf("%d",&i);
	if(i==1){
	menu(i);
}
    if(i==2){
	menu(i);
}
    if(i==3){
	menu(i);
}
    if(i==4){
	menu(i);
}
           
	if(i>4){
	printf("Hatali Islem Yaptiniz");
}
}
}
