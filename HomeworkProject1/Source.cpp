#include <stdio.h>
int main()
{
	int num = 1000, sum = 0;

	for (int x = 0; x < num; x++)
	{
		if (x % 3 == 0)
		{
			sum = sum + x;
		}
		else if (x % 5 == 0)
		{
			sum = sum + x;
		}
	}
	printf("Sum is %d", sum);
	return 0;
}