#include<stdio.h>
template<class T>
class Box{
private:
    T a;
    Box(T a, T b){
        //define here;
    }
    Box(const Box &obj){
        //define here;
    }
    ~Box();
    friend void getMe(T a);
protected:
    T b;

    void whoIam(T b);

};

void Box::whoIam(T b){
    //define here;
}

void getMe(T a){
    //define here
}

class bbox:public Box{
    void whoIam(T b);
};

int main(){
    Box<int> Box;
    bbox<int> bbox;
    Box.a = 5;
    Box.b = 10;
    getMe();
    bbox.whoIam();

}
