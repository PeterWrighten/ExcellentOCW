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
