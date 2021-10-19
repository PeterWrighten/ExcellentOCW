#include<stdio.h>
#include<memory>
#include<iostream>
using namespace std;

class Child;
class Parent{
public:
	Parent(){cout<<"Hi, Parent!"<<endl;};
	~Parent(){cout<<"Bye, Parent!"<<endl;};
	shared_ptr<Child> son;
};

class Child{
public:
	Child(){cout<<"Hi, Child!"<<endl;};
	~Child(){cout<<"Bye, Child!"<<endl;};
	shared_ptr<Parent> father;
};

int main(){
	shared_ptr<Parent> parent(new Parent());
	shared_ptr<Child> child(new Child());
	parent->son = child;
	child->father = parent;
	return 0;
}
