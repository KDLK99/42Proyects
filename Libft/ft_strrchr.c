/*#include <stdio.h>
#include <string.h>

char	*ft_strrchr(char *s, int c);

int	main()
{
	char s[] = "Hola Mundosdofs";

	printf("%d\n", ft_strrchr(s,'w'));
	printf("%d", strrchr(s, 'w'));
	return (0);
}*/

char	*ft_strrchr(char *s, int c)
{
	int		i;
	char	*last;

	last = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			last = &s[i];
		i++;
	}
	return (last);
}
