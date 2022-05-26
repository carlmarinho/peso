#include<stdio.h>
#include<ctype.h>

main(){
	char sex;
	int alt;
	
	printf("Digite seu genero: ");
	scanf("%c", &sex);
	printf("Digite sua altura: ");
	scanf("%d", &alt);
	
	switch(toupper (sex) ){
		case 'M': printf("Peso ideal = %.1f\n", 72.7 * alt - 58);break;
		case 'F': printf("Peso ideal = %.1f\n", 62.1 * alt - 44.7);break;
		default : printf("Invalido\n");
	}
	return 0;
}
