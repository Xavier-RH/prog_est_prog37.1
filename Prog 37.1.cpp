/* Autor: Xavier Romero Hernández, Realizado: 10/03/2022 
	Programa que calcule que pida los datos necesarios para calcular el área del sector circular
*/
	
#include <stdio.h>
#include <math.h>

int main(){
	float radio, angulo, area;
	
	printf("Calculo de area de un sector circular\n\n");
	printf("Ingrese el radio del circulo: ");
	scanf("%f",&radio);
	printf("Ingrese el angulo del sector a calcular: ");
	scanf("%f",&angulo);
	
	area=((M_PI*pow(radio,2))/360)*angulo;
	
	printf("\nEl area del sector circular es de %.2f u2",area);
	
	return 0;
}
