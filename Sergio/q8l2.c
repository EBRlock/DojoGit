#include<stdio.h>

int main(int argc, char** argv)
{
	int n, ant1=1,ant2=1,i=2,atual;
	printf("Digite o valor:");
	scanf("%d",&n);
	if(n==1)
	{
		printf("1\n");
	}
	else
	{
		printf("1\n");
		printf("1\n");
		while(i<n)
		{
			atual= ant1 + ant2;
			ant2=ant1;
			ant1=atual;
			printf("%d\n", atual);
			i++;
		}
	}
	return 0;
}
