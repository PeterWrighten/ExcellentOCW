#include<stdio.h>
template<class T>

class mypair{
public:
    T a, b;
    mypair(T first, T second){
        a = first;
        b = second;
    }
    T getmax();
};
T mypair<T>::getmax(){
    return a > b ? a : b;

int main(){
    mypair<int> myints;
    printf("%d\n",myints.getmax());
}
}
