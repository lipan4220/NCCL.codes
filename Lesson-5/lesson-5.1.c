#include <stdio.h>

#define PRINT(x)	printf(#x " = %d \n", x)

int main(void)
{
	int sum = 0;
	int i;
	
	for (i = 0; i <= 100; i++)	
	{
		sum += i;
		PRINT(sum);		
	}

	printf("sum = %d\n", sum);

	return 0;
}