#include <unistd.h>

void	ft_print_number(void)
{
	write(1, "0123456789", 10);
}

int	main(void)
{
	ft_print_number();
}
