#include "ft_printf.h"
#include "stdio.h"

int		main(void)
{
	char			s[] = "Petit bichon";
	void			*ptr = &s;
	int				a = 0;;
	unsigned int	b = 4294967254;	
	char			c = 'B';

	a = printf("%x", b);
//	a = printf("This is Mambo number 5");
	printf(" -- Size = %d \n", a);
	a = ft_printf("%x", b);
//	a = ft_printf("This is Mambo number 5");
	printf(" -- Size = %d", a);
	return (0);
}
