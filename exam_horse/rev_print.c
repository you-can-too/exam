#include <unistd.h>

int	main(int argc, char **argv)
{
	int size;
 	int i;
	char temp;

	if(argc != 1)
	{
		size = 0;
		i = 0;
		while(argv[argc -1][i])
		{
			size++;
			i++;
		}

		i = 0;
		while (i < size /2)
		{
			temp = argv[1][i];
			argv[1][i] = argv[1][size - i -1];
			argv[1][size - i -1] = temp;		
			i++;
		}
		write(1, &*argv[1], size);
	}
	write(1, "\n", 1);
	return(0);
}
