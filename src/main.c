#include <linux/input.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>

/*void waitFor (unsigned int secs) {
  unsigned int retTime = time(0) + secs;   // Get finishing time.
  while (time(0) < retTime);               // Loop until it arrives.
  }*/

int main(int argc, char **argv)
{
		int 	fd;
		struct	input_event ev;
		int		*keys;


		fd = open(argv[1], O_RDONLY);//stdin, O_RDONLY);
		if (fd != -1)
		{
				keys = (int*)malloc(sizeof(int) * 130);
				keys[0] = 1;
				while (keys[0] < 130)
						keys[keys[0]++] = 0;
				while (keys[0])
				{
						read(fd, &ev, sizeof(struct input_event));
						if ((ev.type == 1) && (ev.code > 0))
								keys[ev.code - 1] = ev.value;
						//a = 30
						//w = 17
						//s = 31
						//d = 32
						//z = 44
						//e = 18
						//' ' = 57
						//1 = 2
						// `~ = 41
						//shift = 42
						//up = 103
						//down = 108
						//left = 105
						//right = 106
						//return = 28
						//backspace = 14
//						printf("last key pressed was %i and value %i", ev.code, ev.value);
				}
				free(keys);
		}
		else
				printf("Error opening keyboard.\n");
		return (0);
}
