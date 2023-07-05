#include <stdio.h>
#include <stdlib.h> // For exit()

int main()
{
	FILE *fptr1, *fptr2;
	char text[100], c;

	printf("Enter the filename to open for reading \n");
	scanf("%s", text);

	// Open one file for reading
	fptr1 = fopen(text, "r");
	if (fptr1 == NULL)
	{
		printf("Cannot open file %s \n", text);
		exit(0);
	}

	printf("Enter the filename to open for writing \n");
	scanf("%s", text);

	// Open another file for writing
	fptr2 = fopen(text, "w");
	if (fptr2 == NULL)
	{
		printf("Cannot open file %s \n", text);
		exit(0);
	}

	// Read contents from file
	c = fgetc(fptr1);
	while (c != EOF)
	{
		fputc(c, fptr2);
		c = fgetc(fptr1);
	}

	printf("\nContents copied to %s", text);

	fclose(fptr1);
	fclose(fptr2);
	return 0;
}
