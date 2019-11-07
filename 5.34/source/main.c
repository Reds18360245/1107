#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int power(int b, int e);

int main()
{
	int b, e;
	printf("Enter base :");
	scanf_s("%d", &b);
	printf("Enter exponent :");
	scanf_s("%d", &e);
	printf("The value is : %d\n", power(b, e));
	system("PAUSE");
	return 0;
}

int power(int b, int e)
{
	int a = 1;
	if (e != 1)
	{
		for (int i = 1; i <= e; i++)
			a = b * a;
	}
	return a;
}