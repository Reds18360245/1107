#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	char input, output;
	printf("Enter a alphabet :");
	scanf_s("%c", &input);
	if (input < 65 || input > 122)
	{
		printf("Enter an error alphabet! \n");
	}
	else
	{
		if (input <= 90)
		{
			output = input + 32;
		}
		else
		{
			output = input - 32;
		}
		printf("%c  =>  %c\n", input, output);

	}
	system("pause");
	return 0;
}