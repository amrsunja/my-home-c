//	Created by aazdoev  //
//----------------------//
//
//0-9 == 48-57

#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
	int i;

	if (!str[0])
	{
		return (1);
	}
	else
	{
		i = 0;
		while (str[i])
		{
			if (str[i] < 65 || str[i] > 90)	
				return (0);
			i++;
		}
	}
	return (1);
}

int main(void)
{
	char str[] = "";
	printf("%d", ft_str_is_lowercase(str));
}
