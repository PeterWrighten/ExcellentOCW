#include<stdio.h>

class Parent{
public:
    void Function1();
    void Function2();
};
void Parent::Function1(){
    printf("This is parent, Function1\n");
}
void Parent::Function2(){
    printf("This is parent, Function2\n");
}
class Children:public Parent{
    void Function1();
    virtual void Function2();
};
void Children::Function1(){
    printf("This is children, Function1\n");
}
void Children::Function2(){
    printf("This is children, Function2\n");
}


int main(){
    Parent *p = new Children;
    p->Function1();//C call compiled. This is parent, Function1
    p->Function2();//Virtual function. Dynamic Binding. This is Children, Function2.
}