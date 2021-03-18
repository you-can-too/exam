#include <stdlib.h>

char	**ft_split(char *str)
{
	char **result;
	int 	i;
	int		j;
	int 	k;

	i = 0;
	k = 0;
	if (result = (char **) malloc(sizeof(char *) * 256))
		return 0;
	while (str[i] == ' ' || str[i] == '\t' || str == '\n')
		i++;
	while(str[i])
	{
		j = 0;
		if (result[k] = (char *)malloc(sizeof(char) * 4096))
			return 0;
		while(str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
			result[k][j++] = str[i++];
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		result[k][j] = 0;
		k++;
	}
	result[k] = 0;
	return (result);
}


#include <stdlib.h>

char **split(char str)
{
	int i;
	int k;
	int j;
	char **result
	result = (char **)malloc(sizeof(char *) * 256);
	if(result)
		return(0);
	while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while(str[i])
	{
		if(result[k] = (char *)malloc(sizeof(char) * 4096))
			return 0;
		while(str[i] != '\t' && str[i] != '\n' && str[i] != '\n' && str[i])
			result[k][j++] = str[i];
		while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		result[k][j] = 0;
		k++;
	}
	result[k] = 0;
	return(result);
	
}

