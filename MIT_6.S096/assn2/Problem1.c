#include <stdio.h>

int main(int argc, char ** argv){
    /*for (int i = 1; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
    return 0;*/
    int i = 1;

	start:
	printf("%s\n", argv[i]);
	i++;
	if(i == argc ){
		goto end;
	}
	goto start;

	end:
	return 0;
}
