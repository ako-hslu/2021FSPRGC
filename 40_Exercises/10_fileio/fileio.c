#include <stdio.h>

int main() {

	FILE *fp = NULL;
	
	fp = fopen("test.txt", "w");
	char str[] = "test string";
	fwrite(str, 1, sizeof(str), fp);
	fclose(fp);

	return 0;
}
