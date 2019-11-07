#include <stdio.h>
#include<stdlib.h>
#include<math.h>

void hanoi(int n, char A, char B, char C);
int main() {
	int n, step;
	printf("Enter sheets quantityiG");
	scanf_s("%d", &n);
	hanoi(n, 'A', 'B', 'C');
	step = pow(2, n) - 1;
	printf("Use the %d steps\n", step);
	system("pause");
	return 0;
}
void hanoi(int n, char A, char B, char C)
{
	if (n == 1)
	{
		printf("Move sheet from %c to %c\n", A, C);
	}
	else
	{
		hanoi(n - 1, A, C, B);
		hanoi(1, A, B, C);
		hanoi(n - 1, B, A, C);
	}

}