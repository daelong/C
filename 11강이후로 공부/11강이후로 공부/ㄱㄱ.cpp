#include <stdio.h>
#define NUMBER 5


int main(void)
{
	int array[NUMBER];
	int i, oddmax, evenmax;
	oddmax = 0;
	evenmax = 0;
	for(i=0; i<NUMBER; i++)
	{
		scanf("%d", &array[i]);
		if(array[i] % 2 ==0)
		{
			if(evenmax < array[i])
			{
				evenmax = array[i];
			}
		}
		else
		{
			if(oddmax < array[i])
			{
				oddmax = array[i];
			}
		}
	}
	printf("%d %d ", oddmax, evenmax);
	return 0;
}