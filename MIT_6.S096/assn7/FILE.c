#include <stdlib.h>
#include <stdio.h>

int main(){
	FILE *fp;
	fp = fopen("file.txt","w+");
	fprintf(fp, "%s %s %s %d","We","are", "in", 2021);
	fclose(fp);
	return 0;
}
