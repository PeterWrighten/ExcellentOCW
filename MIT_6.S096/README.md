# MIT 6.S096 Introduction to C and C++

[IntroC](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-s096-introduction-to-c-and-c-january-iap-2013/lectures-and-assignments/)

## Assignments

Assignment|Info|Solution
--:|--:|--:
Compilation Pipeline  |  [A1](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-s096-introduction-to-c-and-c-january-iap-2013/lectures-and-assignments/compilation-pipeline/) |[S1](https://github.com/PeterWrighten/Excellent_OCW/tree/main/MIT_6.S096/assn1)





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
>```main.c``` => Format txt

Compile: ```gcc -c main.c main.c```
>```main.c``` => main.o/Function.o

Link: ```gcc -o prog main.o main.o```
>```main.o``` => prog

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

**Lecture 1 END**

### Lecture 2:
