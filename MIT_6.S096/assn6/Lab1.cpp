#include<stdio.h>

class Goofball{
public:
	int x;

};

class A: virtual public Goofball{

};

class B: virtual public Goofball{};

class oop:public A, public B{
public:

	int fail();
};

int oop::fail(){
	A::x = 1;
	B::x = 2;
	return A::x + B::x;
}

int main(){
	oop *c = new oop;
	printf("%d\n",c->fail());
	return 0;
}
