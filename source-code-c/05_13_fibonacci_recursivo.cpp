#include <stdio.h>
int Rec;

int fibonacci(int);

int main()
{
	int Num, FIB;

	printf("\n\nOs primeiros termos da serie de Fibonacci sao: \n\n");
	scanf("%d", &Num);

	FIB = fibonacci(Num);

	printf("fib(%d) = %d calls = %d  ", Num, (Rec - 1), FIB);

	printf("\n");
	return 0;
}

/* Função recursiva que calcula o n-ésimo termo da série de Fibonacci*/
int fibonacci(int n)
{
	Rec++;

	if (n == 0 || n == 1)
		return n;
	return fibonacci((n - 1)) + fibonacci((n - 2));
}

