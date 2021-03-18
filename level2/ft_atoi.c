#include <stdio.h>

int	ft_atoi(const char *str)
{
	int i;
	int minus;
	int result;

	minus = 1;
	i = 0;
	result = 0;
	
	while(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
		{
			minus = (minus *-1);
		}
		i++;
	}

	while(str[i])
	{
		if('0' <= str[i] && str[i] <= '9')
		{
			result = str[i] - '0' + (result * 10);
		}
		i++;
	}
	return (result * minus);
}

int	main(void)
{
	char array[] = "---12345689";
	int i = ft_atoi(array);

	printf("%d\n", i);
	i++;
}
