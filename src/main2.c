#include <linux/input.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
		int fd;
		/*	if(argc < 2) {
			printf("usage: %s <device>\n", argv[0]);
			return 1;
			}
			fd = open(argv[1], O_RDONLY);*/
		struct input_event ev;
		//	printf("fd is %i\n", fd);*/
		fd = open(argv[1], O_RDONLY);//stdin, O_RDONLY);
		printf("fd is %i", fd);
		while (1)
		{
				read(fd, &ev, sizeof(struct input_event));

				if(ev.type == 1)
						printf("key %i state %i\n", ev.code, ev.value);

		}
}
