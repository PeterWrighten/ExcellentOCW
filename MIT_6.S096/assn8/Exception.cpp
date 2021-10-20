#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

class MyException:public exception{
    const char *what()const{
        return "MyException";//Human_readable
    }
};

try{
	//protected code
	throw MyError();
}catch(YourError e1){
	cout<<e1.what()<<endl;
}catch(MyError e2){
	cout<<e2.what()<<endl;
}catch(...){
	//handle all other exceptions
}
