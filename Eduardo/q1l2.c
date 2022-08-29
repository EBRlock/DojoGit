#include <stdio.h>

int main(int arg, char**argv)
{

	int i=1, num, maior=0;


	do
	{
		printf("Dgite o %dº número: \n", i++);
		scanf("%d", &num);

		if(num>maior)
		{
			maior=num;
		}
	}

	while(i<=5);

	printf("O maior número é %d.\n", maior);

	return 0;
}
