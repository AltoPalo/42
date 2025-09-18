#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}

int main(void)
{
	char dest[25];
	char src[] = "Tu vas bien";

	ft_strcpy(dest, src);
	printf("%s\n", dest);
	return(0);
}
