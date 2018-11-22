#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE *fp1 = NULL;
	char word[100];
	char original[100];
	char input[100];
	
	printf("original file : ");
	scanf("%s", original);
	
	fp1 = fopen(original, "r");	
	
	printf("word to find : ");
	scanf("%s", word);

	while ( fgets(input, 100, fp1) != NULL)
	{
		if (strncmp(input, word, strlen(word)) == 0)
		{
			printf("find a word %s\n", input);
		}
	}
	
	printf("Search done!\n");
	
	fclose(fp1);
	
	return 0;
}
