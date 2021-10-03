#include<stdio.h>

void amazeWOW() {
	int i;
	printf("amazeWOW:\t");
	for (i = 0; i <= 10; i++) {
		if (i % 2 == 1) {
			printf("%d ", i);
		}
	}
	printf("\n");
}

void amaze1() {
	int i;
	printf("amaze1:\t");
	for (i = 0; i <= 4; i++) {

			printf("%d ", 2*i+1);

	}
	printf("\n");
}

void amaze2() {
	int i = 0;
	printf("amaze2:\t");
	while( i <= 10 ) {
		if (i % 2 == 1) {
			printf("%d ", i);
		}
		i++;
	}
	printf("\n");
}

void amaze3() {
	int i = 1;
	printf("amaze3:\t");
	do{
		if (i % 2 == 1) {
			printf("%d ", i);
		}
		i++;
	}while(i <= 10);
	printf("\n");
}

void amaze4() {
	int i = 1;
	printf("amaze4:\t");

	A:
		if (i % 2 == 1) {
			printf("%d ", i);
		}
		if( i == 10){
			goto B;
		}
		i++;
	goto A;
   B:
	printf("\n");
	
}

void amaze5() {
	int i = 1;
	printf("amaze5:\t");

	while(1){
		if (i % 2 == 1) {
			printf("%d ", i);
		}
		if( i == 10){
			break;
		}
		i++;
	}
	printf("\n");

}

void amaze6() {
	int i = 0;
	printf("amaze6:\t");

	while(1){
		if (i < 5) {
			printf("%d ", 2*i+1);
		}
		if( i == 4){
			break;
		}
		i++;
	}
	printf("\n");

}



int main(){
	amazeWOW();
	amaze1();
	amaze2();
	amaze3();
	amaze4();
	amaze5();
	amaze6();

}
