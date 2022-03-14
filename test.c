#include "ft_printf.h"

int		main(void)
{
	int x = 50;
	int *ptr = &x;

	ft_printf("The address is: %p", ptr);
	return (0);
}
