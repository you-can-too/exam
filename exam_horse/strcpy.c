#include<stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int i;
	i = 0;
	int j;
	j = 0;
	while(s2[j])
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = 0;
	return(s1);
}

int	main(void)
{
	char a[] = "hello";
	char b[] = "good morning";
	printf("%s", ft_strcpy(a,b));
}
