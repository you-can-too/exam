#include<stdio.h>
#include<unistd.h>

char *ft_strrev(char *str)
{
	int i;
	int size;
	char temp;
	i = 0;
	size = 0;
	while(str[i])
	{
		size++;
		i++;
	}
	i = 0;
	while(i < size/2)
	{
		temp = str[i];
		str[i] =str[size -1 -i];
		str[size -1 -i] = temp;
		i++;
	}
	return (str);
}

int	main(void)
{
	int i;
	i = 0;
	char a[] = "hello";
	char *c = ft_strrev(a);
	while(c[i])
	{
		write(1, &c[i], 1);
		i++;
	}
}
