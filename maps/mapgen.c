#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define MAPSIZE 80

int main(int argc, char **argv)
{
		int 	fd;

		if (argc != 3)
				printf("usage: exec [filename] [char]\n");
		else
		{
				fd = open(argv[1], O_WRONLY, O_CREAT | 0666);
				if (fd != -1)
				{
						char	*c = argv[2];
						int 	x = 0;
						while (x < MAPSIZE)
						{
								int y = 0;
								while (y < MAPSIZE)
								{
										if ((!x || !y) || ((x == MAPSIZE - 1) || (y == MAPSIZE - 1)))
												write(fd, c, 1);
										else
												write(fd, " ", 1);
										y++;
								}
								write(fd, "\n", 1);
								x++;
						}
						close(fd);
				}
				else
						printf("Error opening or creating file.\n");
		}
		return (0);
}
