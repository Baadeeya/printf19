#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "ft_printf.h"

int	main(void)
{
	intptr 	i = 0;

	ft_putnbr_base(i, "0123456789abcdef");
	printf("\n%d\n",(int)i);
//	intptr	ptr;
//	ptr = (intptr)str;


	return (0);
}
