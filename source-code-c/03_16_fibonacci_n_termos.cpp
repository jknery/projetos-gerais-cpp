#include<stdio.h>
#include<stdlib.h>
//#define N 30

int main ()
{
	long int x;
	int F, G, N;

scanf("%d",&N);

	for(x = 0; x <= N; x++)
	{
		if(x == 0)
			printf("%d ", x);
		if(x == 1)
			printf("%d ", x);

		else
		{
			F = x - 1;
		G = x - 2;

		printf("%d ", (F + G) - 1);
		}
		
		

	}

	printf("\n\n ");

	system("pause");

	return 0;
}








