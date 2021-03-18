#include <stdlib.h>
#include <unistd.h>

char *ft_strdup(char *src)
{
	int i;
	int length;
	char *ptr;

	i = 0;
	length = 0;
	while(src[i])
	{
		length++;
		i++;
	}
	ptr = (char *)malloc(sizeof(char)*(length+1));

	i = 0;
	while(src[i])
	{
		*ptr = src[i];
		ptr++;
		src++;
	}
	*ptr = 0;
	return (ptr);
}

int	main(void)
{
	int i = 0;
	array[] = "Are you working?";
	char *c = ft_strdup(array);
	while(c[i])
	{
		write(1, c[i], 1);
		i++;
	}

}
