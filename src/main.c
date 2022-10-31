#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	size_t memSize = sizeof(int) * 4048;
	int* p = malloc(memSize);

	for(int i = 0; i < 4048; i++){
		p[i] = i;

		printf("%i\n", p[i]);
	}

	return 0;
}
