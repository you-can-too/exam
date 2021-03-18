#include<stdio.h>

int	ft_atoi(const char *str)
{
	int i;
	int minus;
	int result;

	i = 0;
	minus = 1;
	result = 0;
	while(str[i])
	{
		while((9 <= str[i] && str[i] <= 12) || str[i] == ' ')
			i++;
		if(str[i] == '+')
			i++;
		else if(str[i] == '-')
		{
			minus = -1;
			i++;
		}
		while(str[i] >= '0' && str[i] <= '9')
		{
			result = (result * 10) + (str[i] - '0');
			i++;
		}
	}
	return(result * minus);
}
int	main(void)
{
	char a[] = "++-++12345";
	int c = ft_atoi(a);
	printf("%d", c);
}
