#include<stdio.h>
#include<iostream>
using namespace std;

class Base{
public:
	Base();
    virtual void print();
	virtual void setup();
	virtual ~Base();

};

Base::Base(){
	cout<<"Base!"<<endl;
};

void Base::print(){
	cout<<"Print!"<<endl;
}

void Base::setup(){
	cout<<"Setup!"<<endl;
}

Base::~Base(){
	cout<<"Destructor!"<<endl;
}


int main(){
	typedef void (*Fun)(void);
	Base b;
	int *vptrAdree = (int *)(&b);
	Fun vFun = (Fun)* ((int *) *(int *)(&b));

	cout<<"vptr:\t"<<vptrAdree<<endl;
	cout<<"vFunc:\t";
	vFun();
}
