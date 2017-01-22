#include "shared.h"

/*void waitFor (unsigned int secs) {
  unsigned int retTime = time(0) + secs;   // Get finishing time.
  while (time(0) < retTime);               // Loop until it arrives.
  }*/

int main(int argc, char **argv)
{
		int 	fd;
		struct	input_event ev;
		int		*keys;
		//handle grid

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
				}
				free(keys);
		}
		else
				printf("Error opening keyboard.\n");
		return (0);
}
