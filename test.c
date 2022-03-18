#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int		main(void)
{
	char			*s = NULL;
	void			*ptr = &s;
	int				a = 0;;
	unsigned int	b = -1;	
	char			c = 'B';

	a = printf("%s", s);
//	a = printf("This is Mambo number 5");
	printf(" -- Size = %d \n", a);
	a = ft_printf("%s", s);
//	a = ft_printf("This is Mambo number 5");
	printf(" -- Size = %d", a);
	return (0);
}
