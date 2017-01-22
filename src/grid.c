#include "shared.h"

static int	on_list(char c)
{
	char	*list = "\n\t\r";

	while (*list)
	{
			if (c == *list)
					return (1);
			list++;
	}
	return (0);
}

int			check_file(char	*file)
{
	int		row;
	int		col;

	row = 0;
	while (row < MAP_SIZE)
	{
			col = 0;
			while (col < MAP_SIZE)
			{
				if (on_list(
