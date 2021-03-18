#include<unistd.h>

int	is_doubled(char *str, char c, int i)
{
	int idx;
	
	idx = 0;
	while(idx < i)
	{
		if(str[idx] == c)
		{
			return(1);
		}
		idx++;
	}
	return(0);
}

int	main(int argc, char **argv)
{
	char *final;

	int i;
	int j;
	i = 0;
	if(argc == 3)
	{
		while(argv[1][i])
		{
			if(is_doubled(argv[1], argv[1][i], i) != 1)
			{
				write(1, &argv[1][i], 1);
			}
			i++;
		}
		j = 0;		
		while(argv[2][j])
		{
			if((is_doubled(argv[1], argv[2][j], i) != 1) && (is_doubled(argv[2], argv[2][j], j) != 1))
					write(1, &argv[2][j], 1);
			j++

		}
	}
	write(1, "\n", 1);
	return(0);
}
