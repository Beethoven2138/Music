#include <stdlib.h>
#include <stdio.h>


int main(int argc, char **argv)
{
        int grid[12*12];
	if (argc > 1)
	{
		for (int i = 0; i < 12; ++i)
			grid[i] = atoi(argv[i+1]);
	}
	else
		exit(-1);
	int start;
	for (int i = 0; i < 12; ++i)
	{
		if (grid[i] > 9)
			printf("%d ", grid[i]);
		else
			printf("%d  ", grid[i]);
	}
	printf("\n");
	for (int i = 1; i < 12; ++i)
	{
		start = grid[12 * i] = (grid[12 * (i-1)] - (grid[i] - grid[i-1])) % 12;
		if (start < 0)
			start = grid[12 * i] = 12 + start;
	        for (int pos = 1; pos < 12; ++pos)
			grid[12 * i + pos] = (grid[pos] + start) % 12;
		for (int j = 0; j < 12; ++j)
		{
			if (grid[i * 12 + j] > 9)
				printf("%d ", grid[i * 12 + j]);
			else
				printf("%d  ", grid[i * 12 + j]);
		}
		printf("\n");
		
	}
	return 0;
}
