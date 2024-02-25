#include <stdio.h>

int main(void)
{
	int count;
	unsigned long fibo1 = 1, fibo2 = 2, fibo_half1 = 0, fibo_half2 = 0;
	unsigned long hold1, hold2, hold3;

	printf("%lu, %lu, ", fibo1, fibo2);

for (count = 2; count < 98; count++)
{
	if (fibo1 + fibo2 > 10000000000 || fibo_half1 > 0 || fibo_half2 > 0)
	{
		hold1 = (fibo1 + fibo2) / 10000000000;
		hold2 = (fibo1 + fibo2) % 10000000000;
		hold3 = fibo_half1 + fibo_half2 + hold1;
		fibo_half1 = fibo_half2, fibo_half2 = hold3;
		fibo1 = fibo2, fibo2 = hold2;
		printf("%lu%lu", fibo_half2, fibo2);
	}
	else
	{
		hold2 = fibo1 + fibo2;
		fibo1 = fibo2, fibo2 = hold2;
		printf("%lu", fibo2);
	}
	if (count != 97)
        printf(", ");
}
printf("\n");
return (0);
}
