/*#include <stdio.h>
#include <string.h>

char	*ft_strchr(char *s, int c);

int	main()
{
	char s[] = "Hla Mundo";

	printf("%d\n", ft_strchr(s,'s'));
	printf("%d", strchr(s, 's'));
	return (0);
}*/

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
