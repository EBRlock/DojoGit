#include<stdio.h>

int main(int argc, char** argv)
{
	int base, exp, i=0, valor=1;
	printf("Digite a base e o expoente: ");
	scanf("%d %d",&base, &exp);

	while(i<exp)
	{
		valor = valor*base;
		i = i+1;
	}
	printf("%d^%d\n",base, exp);
	printf("Resultado: %d\n", valor);
	return 0;
}
