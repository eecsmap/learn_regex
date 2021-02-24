#include "regex.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc != 3) {
		fprintf(stderr, "usage: %s <string> <pattern>\n", argv[0]);
		exit(1);
	}
	bool result = regex_match(argv[1], argv[2]);
	printf("%s %s pattern %s\n", argv[1], result ? "matches" : "does not match", argv[2]);
}
