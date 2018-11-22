#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char src[100] = "Programming course";
	//char dst[100];
	int i;
	
	while (src[i] != '\0')
	{
	//	dst[i] = src[i];
		i++;
	}
	//dst[i] = '\0';
	
	printf("%s (%i)\n", src, i);
	printf("%i", strlen(src));	// 문자열 길이 계산  
	
	return 0;
}
