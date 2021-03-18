#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int *result;
	int i;

	i = max >= min ? max - min : min - max;
	result = (int *)malloc(sizeof(int) * (end - start + 1));
	if(result)
		return(0);

	while(min != end)
	{
		*result = max > min ? min++ : min --;
	}
	*result = min;
	return (result - i);
	
}
