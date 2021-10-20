#include<stdio.h>
#include<stdlib.h>

struct Buffer{
public:
	Buffer(int s){
		buf = new char[s];;
	}
	~Buffer(){delete [] buf;};
	char *buf;
};

struct FBuffer: public Buffer{
public:
	FBuffer(int s):Buffer(s){
		f = fopen("file", "w");
	}
	~FBuffer(){fclose(f);}
	void write(){
		fwrite(buf, 1, 40, f);
	}
	FILE *f;
};

struct Buffer0{
public:
	Buffer0(int s){
		buf = new char[s];;
	}
	virtual ~Buffer0(){delete [] buf;};
	char *buf;
};

struct FBuffer0: public Buffer0{
public:
	FBuffer0(int s):Buffer0(s){
		f = fopen("file", "w");
	}
	virtual ~FBuffer0(){fclose(f);}
	void write(){
		fwrite(buf, 1, 40, f);
	}
	FILE *f;
};

int main(){
	int x;
	Buffer *fbuf = new FBuffer(128);
	Buffer0 *fbuf0 = new FBuffer0(128);
	scanf("%d",&x);
	if(x == 1){
		delete fbuf;//False, ~FBuffer() is not called
	}else{
		delete fbuf0;//True, Virtual destructor is called
	}
	return 0;
}
