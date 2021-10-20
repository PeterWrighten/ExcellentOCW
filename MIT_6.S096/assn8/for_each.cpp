#include<algorithm>//necessary
#include<vector>
#include<iostream>
using namespace std;

void print(int i){
	cout<<" "<<i;
}

int main(){
vector<int> myvec;
myvec.push_back(10);
myvec.push_back(20);
for_each(myvec.begin(), myvec.end(),print);
}
