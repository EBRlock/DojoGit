#include <stdio.h>

int main(int argc, char** argv)

{

int n,i,r;
r=0;
i=1;

printf("digite um numero inteiro\n");
scanf("%d",&n);

        while (i<=n)
        {
                if (n%i == 0)
                {
                        r = r+1;
                printf("o numero é divisivel por: %d \n",i);
                }
                        else
                        {
                        }
                ++i;

        }

        if (r == 1 || r == 2)
        {
                printf("o numero é primo \n");
                return 0;
        }

                	else
			{
				printf("numero não é primo\n");
                        }

return 1;


}
