# MIT 6.S096 Introduction to C and C++

[IntroC](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-s096-introduction-to-c-and-c-january-iap-2013/lectures-and-assignments/)

## Assignments

Assignment|Info|Solution
--:|--:|--:
[Compilation Pipeline](https://github.com/PeterWrighten/Excellent_OCW/blob/main/MIT_6.S096/README.md#lecture-1-compilation-pipeline)  |  [A1](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-s096-introduction-to-c-and-c-january-iap-2013/lectures-and-assignments/compilation-pipeline/) |[S1](https://github.com/PeterWrighten/Excellent_OCW/tree/main/MIT_6.S096/assn1)
[Core C](https://github.com/PeterWrighten/Excellent_OCW/blob/main/MIT_6.S096/README.md#lecture-2-core-c-control-structures-variables-scope-and-uninitialized-memory)  |  [A2](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-s096-introduction-to-c-and-c-january-iap-2013/lectures-and-assignments/core-c-control-structures-variables-scope-and-uninitialized-memory/) |  [S2](https://github.com/PeterWrighten/Excellent_OCW/tree/main/MIT_6.S096/assn2)
[C Memory Management]()  | [A3](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-s096-introduction-to-c-and-c-january-iap-2013/lectures-and-assignments/c-memory-management/) |  [S3]()





## Note

> I'd like to take notes and memo of this course in the following space. You could clik titles of each note to access in course homepage.

### Lecture 1: [Compilation Pipeline](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-s096-introduction-to-c-and-c-january-iap-2013/lectures-and-assignments/compilation-pipeline/)
![Hey](https://raw.githubusercontent.com/PeterWrighten/MarkDown_Photo/main/Hey.jpeg)

>Hey, guys, I'm Peter. Today I wanna review my C and C++ by MIT 6.S096. If you are also interested in this course, we could do it together, maybe by pull the issue(?).Well, let's get starded and keep learning.

C: A language to avoid writing Asembly Language.

C++: responds to the demand of maintaining large C proj.

**Implement**
```
$ gcc -o prog main.c
$ ./prog
Hello,World!
```
C:  ```Main.c``` ==> ~~```Main.o```~~ ==> ```a.out``` ==> ```C.main```
>Pre-process
>>Compile
>>>Link
>>>>Implement


JAVA:  ```Main.java``` ==> ```Main.class``` ==> ```Java.main```

Python:  ```Main.py``` ==> ~~```main.pyc```~~ ==> ```PythonMain.py```

```
$ cpp -P xxx.txt
$ cpp -P xxx.py

$ gcc -E xxx.c
# would output C as format text, no compile
 ```

 **Compile**

* Type-checking

Not like Python, in C, you have to check the type.
For example, inputting ```int``` couldn't output ```float```.
> But no necessary in Python or other interpreted language.
> Unfortunately, C is a compiled language.

* Linear processing

You can only use what is declared above.

>> Even couldn't work it out in interpreted language.

#### **Summary**

Preprocess: ```gcc -E main.c```
>```main.c``` => ```Format txt```

Compile: ```gcc -c main.c main.c```
>```main.c``` => ```main.o/Function.o```

Link: ```gcc -o prog main.o main.o```
>```main.o``` => ```prog```

#### **MEMO About Assignment**

> What does #ifdef mean?
>>In C, the #ifdef directively allows for conditional compilation. The preprocessor determines if the provided macro exists before including the subsequent code in the compilation process.

>In Problem1, it's just a simple problem to search indent error, but in Problem 2, we should use the Macro to implement both 'fibonacci' and 'reverse' ether.
>>So what is Macro?\
>>Let's take a example first:\
>>```#define PI 3.1415926``` is seemed as a parameterized Macro.\
>>\
>>So I think now you have had some concepts about what Macro is.\
>>Macro: A macro (short for "macro instruction", from Greek combining form μακρο- "long, large") in computer science is a rule or pattern that specifies how a certain input should be mapped to a replacement output. Applying a macro to an input is macro expansion.

>Problem1
>>```
>>$ gcc -Wall -std=c99 xxx.c -o xxx
>>```

>Proble2
>>```
>>$ gcc -Wall -std=c99 DXXX xxx.c -o xxx
>>```
>>[What's an object file in C?](https://newbedev.com/what-s-an-object-file-in-c)

>What's the meaning of 'gcc -Wall'?
>> -Wall: This will check not only for errors but also for all kinds warning like unused variables errors, it is good practice to use this flag while compiling the code.

>[gcc command in Linux with examples](https://www.geeksforgeeks.org/gcc-command-in-linux-with-examples/)

**Lecture 1 END**

### Lecture 2: [Core C: Control Structures, Variables, Scope, and Uninitialized Memory](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-s096-introduction-to-c-and-c-january-iap-2013/lectures-and-assignments/core-c-control-structures-variables-scope-and-uninitialized-memory/)

**Basic Control Structure**

such as ```while```, ```for``` and so on.

i.e.
```C
int i = 1;
while( i ++ < 3 ){
    printf("%d\n",i);
    }
```
Empty for loop is an "infinite" while.

```C
while(1) == for()
```

**switch syntax:**

```switch``` syntax is similar with multiple if loop.

i.e.:

```C
switch(i){
  case 1:
     printf("This is one");
     break;
  case 2:
     printf("This is two");
     break;
  case 3:
     printf("This is three");
     break;
  default:
     printf("It's something else!");
 }
```
The above is similar with:

```C
if(i == 1){
    printf("This is one");
}else if(i == 2){
    printf("This is two");
}...
```
**Jump Syntax:**

```C
use continue, break, goto, and label
```

* Target label must be in the same function.
* Notorious for creating hard-to-read code.

```int``` is variable, ```const int``` is const.

Declaration ```static int``` retains the variable for the lifetime of program.

It is not similar with pointer.

i.e.:

Case 1: use pointer:

```C
typedef struct{
    int x;
    int y;
}POINT;

POINT p2(POINT *p1, int dx, int dy){
    p2->x = p1->x + dx;
    p2->y = p1->y + dy;
}
```

Case 2: use static int:

```C
typedef struct{
    static int x;
    static int y;
}POINT;

POINT p2(POINT p1, int dx, int dy){
    p1.x = p1.x + dx;
    p1.x = p1.x + dy;
}
```

because the static data couldn't exist in anonymous struct.

#### **Scope**

i.e.:

```C
void bar(){
    int a = 0;
    if(3 > 0){
        int b = 0;
        b = 2;
    }
    a++:
    b++;
}

void foo(){
    int a = 0;
}
```

>a is "in  scope" for entire function, b is only "in scope" in ```bar``` 's if statement.

**Anonymous Blocks**

It demonstrates the concept of "block scope".

i.e.:
```C
void foo(){
    {int a = 0;}
    {
        double a = 3.14;
         {
             char * a = "3.14";
    }
}  //no 'a' define in this scope.
}
```





**Lecture 2 END**

### Lecture 3: [C Memory Management](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-s096-introduction-to-c-and-c-january-iap-2013/lectures-and-assignments/c-memory-management/)

#### Computer Memory

**Heap**

```Def``` : Heap is a chunk of memory that users can use to dynamically allocated memory.

* Lasts until freed, or program exits.

**Stack**

```Def``` : Stack contains local variables from functions and related book-keeping data. LIFO Structure.

* Function variables are pushed onto stack when called.
* Functions variables are poped off stack when return.

Show memory layout:
Stack|
--:|
**Heap**|
**BSS**(Uninitialized)|
**Data**(Initialized)|
**Text**(Code)|

Book-keeping: memo where the called function's variables are from.

**Example**

Operate|
--:|
**Local Variables** |
**main()~~[Previou Function]~~ Book-keeping**|
**int i (DS()~~[Present Function]~~ Arg)** |
**--Higher Address--**|

#### Pointers and Address

**Address**

Each variable represents a n address in memory.

```C
 &A = Address of 'A'
 ```

 **Pointers**

 A variable points to Address.

 >Because address is also int, so ```char **ptr``` is allowed.

 >Can do math with Pointers

 ```C
char *ptr;
ptr + 1 <-- Next address of which ptr points
 ```

 #### Array

**Array is really a chunk of memory!!**

C style Array <-- statically allocated

**Array variables are pointers to the array start**

```C
char *ptr;
char str[10];
ptr = str; // means ptr = &str[0];
```

**Array indexing is same as dereferencing after pointer addition**

```C
str[1]= 'a'; // means *(str + 1) = 'a';
```

**C Style Strings**

> ```#include<string.h>``` is necessary

>No String type in C language. C string is interpreted as a null-terminated char array(The last char is '\0')

```C
char str[] = "abc"; <-- String literal use "". Compiler converts literals to char array.
```

>Char array can be larger than string.

**Special chars**

* \\ backslash
* \'
* \"
* \n new line
* \t tab
* \b backspace
* \r Enter(carriage return)

```C
char *strcpy(chr *dest, const char *source);
strcpy(str, "hakuna");

```

#### Dynamic Allocation

>```#include<stdio.h>``` is necessary.

* ```sizeof('Datatype')``` returns number of byte of a datatype.
* ```malloc/realloc``` finds a specified amount of free memory and returns a void pointer.

```C
char *ptr = malloc(sizeof(int)*3);
strcpy(str, "hi");

str = realloc(str, sizeof(char)*6);
strcpy(str, "hello");
```
>```realloc()``` could only use to allocate existed malloced ptr.

>```free()``` would freed the allocated Address

**Dynamically Allocated Array**

>**!!** in C, you are not allowed define an array without declaring arraysize, but use following method you could do it.

Allow you to avoid declaring array size at declaration.

```C
int *dynamic_array;
dynamic_array = malloc(sizeof(int)*10);
dynamic_array[0] = 1; //now points to an array
```

#### Summary

1. Memory has stack and Heap
2. Pointers and addresses access Memory
3. Arrays are really chunks of memory. Strings are null-terminated char arrays(```const char; char[] = ""```).
4. C allows user memory allocation. Use malloc, relloc and free.

**Lecture3 END**

### Lecture 4:[Data Structures, Debugging](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-s096-introduction-to-c-and-c-january-iap-2013/lectures-and-assignments/data-structures-debugging/)

**Memory Leaks and Valgrind Tool**

Memory leaks

> allocated memory that's not freed.

Valgrind

>A memory profiling tool. Helps you find memory leaks.

Compile with debug mode:

```C
$ gcc -g helloworld.c -o helloworld
```

Include tools such as memcheck, cachegrind, callgrind....

* Command line:

```C
$ valgrind --tool=tool_name ./program_name

Ex:

$ valgrind --tool=memcheck ./hello_world
```

**Structs and union**

C has no Objects, but has data structures that can help fill in roles. Only contains data.

>I had known and understood Structs, so I skipped this part.

**!!**
* Struct size != sum of member sizes
* All members (struct size) must "align" with largest member size.
i.e.:

```C
struct x{
    char a;// 1-byte, must be 1-byte aligned
    short b;//2-byte, must be 2-byte aligned
    int c;//Biggest member 4-byte. So X must be 4-byte aligned.
}
```

**Unions**

Can only access one member at a time. Union stores all data in same chunk of memory.

So union always use with struct together.

```C
struct student{
    union grade{
        int percentage;
        char letter;
    };
    int switcher;//if switcher = 0, represents percentage grade; if = 1; represents letter grade.
}
struct student frank;
frank.grade.letter = 'B';
frank.switcher = 1;
```

**Opaque Types**

Type exposed via pointers where definition can still change.

Ex:Can change struct person definition in test.c without recompiling my_file.c

**Enum and Typedef**

Define own variable type with a set of int values

```C
enum week{Mon, Tue, Wed};

enum week day;

day = Wed;

printf("%d",day);

Output: 2
```

Why use Enum?

Like a #define variable but is actually a C element.
```C
#define NORTH 0
#define EAST 1
#define SOUTH 2
#define WEST 3
int direction = SOUTH;
//Compiler sees:
//int direction = 2
```

```C
enum dir_t{
NORTH,
EAST,
SOUTH,
WEST
};
typedef enum dir_t dir_t;

dir_t direction = SOUTH;

```

**GDB Debugging Tool**

Compile with -g flag(Debug mode)

```C
gcc -g hello.c -o hello

gcc -ggdb3 hello.c -o hello
```

Commandline debugger:

```C
$ gdb ./prog_name
```

**GDB Commands**

* q/quit
* r/run
* b/break(filename:)linenumber :crfeate a breakpoint
* s/step:execute next line
* c/continue: continue execution
* p variable: print current value of Variables
* bt: print stack trace.

**Lecture 4 END**

### Lecture 5: [C++ Introduction, Classes and Templates](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-s096-introduction-to-c-and-c-january-iap-2013/lectures-and-assignments/c-introduction-classes-and-templates/)

**C++**

* Objected-oriented(but later than Simula, Smalltalk)
* 1983
* Like C, but introduces real objects and classes

>g++(C++ compiler)

```C
$ g++ -o test test.cpp
```

**New Memory management**

* The new operator allocates space on the heap
* new and delete take the place of malloc(sizeof()) and free().

```cpp
int *numArray = new int[100];
delete numArray;
struct foo * bar = new struct foo;
```

**Classes**

* Modularity
* Objects(data + behavior)
* Lets programmers define behavior for your own data.

**Constructors and Destructors**

* This destructor should have fit on the last slide
* Since we explicitly allocated something with new, we must also explicitly de-allocate it.

```cpp
// destructor
class Rectangle{
public:
    int w;
    int h;
    Rectangle(int w, int h);
    ~Rectangle();

}
// ignore defining Rectangle()
Rectangle::~Rectangle(){
    delete width;
    delete height;
}
```

* Rectangle itself is automatically deallocated when it goes out of scope.


**Templates**

* Syntax for making code more flexible.
* Similar in spirit to JAVA's generics.
* Applied at compile-time, like C macros.
* Can be applied to classes, functions.

Class Example:

```cpp
#include<stdio.h>

class Rectangle{
    int *width;
    int *height;

public:
    Rectangle(int, int);
    ~Rectangle();
    void printMe(){
        printf("Dimensions: %d by %d. \n", *width, *height);
    }
};
Rectangle::Rectangle(int w, int h){
    width = new int;
    height = new int;
    *width = w;
    *height = h;
}
```



#### About Class

class is a object in cpp. It is the essence of Object-Oriented Programming.

```cpp
class Name{
public: //Access specifier, "private", "protected" are also available.
    datatype variables;

    constructor_name();
    ~constructure_name();//destructor, it is trival here because system would generate it defaultly.
    memberFunction();

};

Name::constructor_name(){
    //define constructor here
}
```

You could define ``` memberFunction()``` in ```class```, or use ```::``` (scope resolution operator) to define it outside ```class```.

**Access specifier**

```public```: No limit

```private```: only available in class and friend class.

```protected```: could access in derived class.

```cpp
#include<iostream>
class Box{
protected:
    double width;
};

class smallBox:Box{
public:
    void setSmallWidth(double width);
};

int main(){
    smallBox box;
    box.setSmallWidth(5.0);
    cout<<"Width of box:"<<box.setSmallWidth(5.0)<<endl;
    return 0;
}
```

**Constructor and Destructor**

* has the same name of class.
* constructor would be implemented automatically when declare the class.
* Constructor could be substituted parameters.

```cpp
class Line{
public:
    double len;
    line(double len);
    ~line();
private:
    double length;

};

Line::line(double len):length(len){// that means length = len;
    cout<<"Object is created, length = "<<len<<endl;
}

```

**Templates**

* Syntax for making code more flexible.
* Similar in spirit to JAVA's generics.
* Applied at compile-time, like C macros(the preprocessor)
* Can be applied to classes, functions.
* Trivia: language of templates is turing complete.

**About Template**

* Function Templates
* Class Templates

Q1: What is namespace?

A:
```cpp
#include<iostream>
using namespace std;//This is point;

```
because variables are defined in std namespace of iostream.h header file.

***********************

```cpp
template<class typeParam>
typeParam max(typeParam a, typeParam b){
    return(a > b ? a : b);
}

int main(){
    int a = 3, b = 7;
    double c = 5.5, d = 1.5;
    printf("%d\n",max(a, b));
    printf("%f\n",max(c, d));
}

```
function template is used for definition of unknown datatype functions.

```cpp
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
```
**Class could also be instead of "typename"**

':' after constructor --> Initialize variables

**Lecture 5 END**


### Lecture 6: [C++ Inheritance](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-s096-introduction-to-c-and-c-january-iap-2013/lectures-and-assignments/c-inheritance/)

**Review**

```Struct``` => Independent Memory space [parallel]

```Union``` => The same memory space used together [tile]

**Why inheritance**

To solve Repeated Memory Space

i.e.:

```cpp
struct Circle{
    int x, y;
    int radius;
    void draw();
};

struct Square{
    int x, y;
    int width;
    void draw();
};

int main(){
    Circle circle[nc];
    Square square[ns];
    for(int i = 0; ++i < ns){
        circle[i].draw();
    }
    ...
    for(int i = 0; ++i < ns){
        delete circle[i];
    }
    ...
}
```

That is so complicated and a waste of space.

**Inheritance**

* Subclass

>inherit behavior from the parent

* Virtual
