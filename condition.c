#include <cs50.h>
#include <stdio.h>

int main(void)
{
	printf("Please gime an int: ");
	int n = GetInt();

	if (n > 0)
	{
		printf("You picked a positive integer!\n");
	}
	else if (n == 0)
	{
		printf("You picked Zero\n");
	}
	else
	{
		printf("You picked a negative integer!\n");
	}
}