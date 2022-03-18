#include "ft_printf.h"
#include "stdio.h"

int		main(void)
{
	char			s[] = "Petit bichon";
	void			*ptr = &s;
	int				a = 0;;
	int				b = -422;	
	char			c = 'B';

	a = printf("%p//%p%%", ptr, &ptr);
//	a = printf("This is Mambo number 5");
	printf(" -- Size = %d \n", a);
	a = ft_printf("%p//%p%%", ptr, &ptr);
//	a = ft_printf("This is Mambo number 5");
	printf(" -- Size = %d", a);
	return (0);
}
