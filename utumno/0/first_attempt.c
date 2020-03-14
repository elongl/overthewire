#include <stdio.h>
#include <unistd.h>


int puts(const char *s) {
	size_t nread;
	FILE* exe;
	char buf[4096];

	exe = fopen("/proc/self/exe", "rb");
	if (exe == NULL) {
		printf("Failed to open file.");
		return -1;
	}
	while ((nread = fread(buf, 1, sizeof(buf), exe)) > 0) {
		fwrite(buf, 1, nread, stdout);
	}
	if (ferror(exe)) {
		printf("An error has occured.");
		return -1;
	}
	fclose(exe);	
}
