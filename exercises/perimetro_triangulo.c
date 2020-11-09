#include <stdio.h>

int main(){
	float a, b, c, P; //Declarando variables de tipo flotante
	printf("Ingresa la longitud del lado a: ");
	scanf("%f", &a);
	printf("Ingresa la longitud del lado b: ");
	scanf("%f", &b);
	printf("Ingresa la longitud del lado c: ");
	scanf("%f", &c);
	printf("Perimetro\n"); //Imprimiendo título
		P=a+b+c; //Suma de los lados del triángulo
		printf("\tEl perimetro del triangulo es = %0.2f.\n",P);
return 0;	
}
