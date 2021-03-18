#include <unistd.h>

int	ft_strlen(char **argv)
{
	int i;
	int length;

	i = 0;
	while(argv[1][i])
	{
		length++;
		i++;
	}
	return(length);
}

int	main(int argc, char **argv)
{
	int i;
	int j;
	int length;

	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	
	i = 0;
	while(argv[1][i])
	{
		length++;
		i++;
	}		
	
	j = length -1;
	while( 0 <= j)
	{
		write(1, &argv[1][j], 1);
		j--;
	}
	return(0);
}
