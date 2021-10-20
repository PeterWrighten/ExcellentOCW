#include<vector>
#include<iostream>

int main(){
std::vector<int> vec;
for(int i = 1; i <= 5; i++){
    vec.push_back(i);
}
for(std::vector<int>::iterator it = vec.begin(); it!=vec.end();++it){
    std::cout<<*it;
    //it is like a pointer.
}

}
