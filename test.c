#include "ft_printf.h"
#include "stdio.h"

int		main(void)
{
	char			s[] = "Petit bichon";
	void			*ptr = &s;
	int				a = 0;;
	unsigned int	b = 0;	
	char			c = 'B';

	a = printf("[%x]", -42);
//	a = printf("This is Mambo number 5");
	printf(" -- Size = %d \n", a);
	a = ft_printf("[%x]", -42);
//	a = ft_printf("This is Mambo number 5");
	printf(" -- Size = %d", a);
	return (0);
}
