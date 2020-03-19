#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	char buf[12];
	printf("argc: %d\n", argc);
	printf("argv[10]: %s\n", argv[10]);
	printf("\n");
	for (int i = 0 ;i < 11; i++) {
		printf("%d (%p): %s\n", i, &argv[i], argv[i]);
	}


	if (argc) {
		printf("Aw..\n");
		exit(1);
	}
	strcpy(buf, argv[10]);
	return 0;
}
