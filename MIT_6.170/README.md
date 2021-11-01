# MIT 6.170: [Software Studio(JAVA)](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-170-software-studio-spring-2013/)

Lecture|Info|Assignment|
--:|--:|--:
Intro  | [Homepage](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-092-java-preparation-for-6-170-january-iap-2006/lecture-notes/)  | [ASSN1](https://github.com/PeterWrighten/Excellent_OCW/tree/main/MIT_6.170/assn1)



# Note

## Lecture 1: Introduction

### Object Oriented Programming

* Object have state
* Programmers call methods on objects to compute over and potentially modify that state

**Class**

* Template for making objects
* Java is about objects->everything is in a class

**Field**

* Object state

```java
class Human{
	int age;
}
```

```<class type> <variable name>;```

**Making objects**

```java

Human lucy = new Human();

```

* All object creation requires a "new".
* objects = instance(of classes)
* lucy is a pointer to the object.
* We assign the constructed object to lucy(Human()<- that is a constructor declaration)
* ```<type><variable name> = <new object>;```
