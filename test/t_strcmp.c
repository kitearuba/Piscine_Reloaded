#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		write(2, "Error, wrong input!\n", 20);
		return (1);
	}
}
