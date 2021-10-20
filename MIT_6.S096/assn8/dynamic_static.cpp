#include<stdlib.h>

class Parent{
public:
	Parent(){};
	~Parent(){};
	virtual void func();//dynamic_cast <- polymorphism

};

void Parent::func(){};

class Child0:public Parent{
public:
	//define here;
};

class Child1:public  Parent{
public:
	//define here
};

int main(){
	Child0 child0;
	Parent *parent = &child0;
	Child1 *child1 = dynamic_cast<Child1*>(parent);
	Child0 *child0_1 = dynamic_cast<Child0>(parent);
}
