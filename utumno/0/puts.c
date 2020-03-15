#include <stdio.h>
#include <string.h>
#include <unistd.h>


int puts(const char *s) {
	for (char* i = s - 0xff; i < s + 0xff; i++) { printf("%c", *i); }
}
