#include <unistd.h>
#include <stdio.h>
#include <time.h>
void waitFor (unsigned int secs) {
    unsigned int retTime = time(0) + secs;   // Get finishing time.
    while (time(0) < retTime);               // Loop until it arrives.
}

void main(int argc, char **argv)
{
	char ch;
	while(1) 
	{
		scanf("%c", &ch);
		printf("%c\n", ch);
//		waitFor(3);
	}
}
