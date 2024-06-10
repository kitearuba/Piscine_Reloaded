#include <unistd.h>
#include "utils.h"
#include "ft_point.h"

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int	main(void)
{
	t_point point;
	set_point(&point);
	ft_putnbr(point.x);
	ft_putnbr(point.y);
	return (0);
}
