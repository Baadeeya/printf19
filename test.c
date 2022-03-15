#include "ft_printf.h"

int		main(void)
{
	char x[] = "Petit bichon";
	void *ptr = &x;

	ft_printf("The address is: %p", ptr);
	return (0);
}
