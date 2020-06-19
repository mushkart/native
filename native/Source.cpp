#define _CRT_SECURE_NO_WARNINGS
#define LEN 999999999999

#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[]) {
	FILE* plot;
	plot = fopen(argv[1], "r");
	char str[LEN];
	fgets(str, LEN, plot);

	int l = strlen(str);
	for (int i = 0; i < l; i++) {
		char str2[99] = {"  "};
		while (str[i] != ' ') {
			strcat(str2, str[i]);
		}

	}

	
	
}