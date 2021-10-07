#include <stdio.h>

void main(){
	char *strcpy(char *dest, const char *s);
	char *str;
	str = malloc(sizeof(char)*200);
	strcpy(str, "I am Peter!");
	printf("%s\n",str);
}
