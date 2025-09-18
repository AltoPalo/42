/*#include <stdio.h>*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0') 
	{
	dest[i] = src[i];
	i++;
	}
	dest[i] = '\0';
	return dest;
}

/*int main(void)
{
	char	dest[60];
	char	src[] = "Hello World";
	unsigned int	n;

	n = 15;
	ft_strncpy(dest, src, n);
	printf("%s\n", dest);
	return (0);
}*/
