#include<stdio.h>

union data{
	int x;
	char y;
};

int main(){
	union data demo;
	demo.y = 'junk';
	demo.x = 1;

	printf(" %d\n",demo.x);
	printf("%c\n",demo.y);
	return 0;
}
