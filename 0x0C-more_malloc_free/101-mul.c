#include "main.h"
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
	// Check for the correct number of arguments
	if (argc != 3) {
		printf("Error\n");
		exit(98);
	}

	// Check if the arguments are composed of digits
	for (int i = 1; i < argc; i++) {
		for (int j = 0; argv[i][j]; j++) {
			if (!isdigit(argv[i][j])) {
				printf("Error\n");
				exit(98);
			}
		}
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int result = num1 * num2;
	printf("%d\n", result);
	return 0;
}
