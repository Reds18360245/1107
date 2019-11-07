#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int gcd(int n1, int n2);
int lcm(int n1, int n2);

int main()
{
	int n1, n2;
	printf("Enter number 1 :");
	scanf_s("%d", &n1);
	printf("Enter number 2 :");
	scanf_s("%d", &n2);
	printf("Least Common Multiple is %d\n", lcm(n1, n2));
	system("pause");
	return 0;
}

int gcd(int n1, int n2)
{
	if (n1)
	{
		while ((n1 = n1 % n2) && (n2 = n2 % n1));
	}
	return n1 + n2;
}

int lcm(int n1, int n2)
{
	return n1 * n2 / gcd(n1, n2);
}