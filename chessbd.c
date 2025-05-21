#include <stdio.h>

int main()
{
	int size=8, row, col;

	for (row=1; row <= size; row++)
	{
		if ((row % 2) == 0)
		{
			printf(" ");
		}
		for (col=1; col <= size; col++)
		{	
			printf("# ");
		}
		printf("\n");

	}

	return 0;

}
