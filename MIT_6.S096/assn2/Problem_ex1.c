#include<stdio.h>

int main(){
	int n = 0;
	int t = 0;
	int i;
	for( i = 0; i++ < 100;){
		t += n;
		n++;
		printf("%d ",t);

	}
	return 0;
}
