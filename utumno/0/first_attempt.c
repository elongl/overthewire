#include <stdio.h>
#include <unistd.h>


int puts(const char *s) {
	char buf[4096];
	sprintf(buf, "cat /proc/%d/maps", getpid());
	system(buf);
}
