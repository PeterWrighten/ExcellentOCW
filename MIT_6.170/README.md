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

**Compile**

```Source Code(.java)``` =| javac(compile) |=> ```Bytecode(.class)```=| java(VM) |=>```prog.```

**Program Structure**

```java
class CLASSNAME{
	public static void main(String[] arguments){
		STATEMENTS
	}
}
```

**Output**

```java
System.out.println(some String);
```

**Types**

>Kinds of values that can be stored and manipulated.

* Boolean: Truth value(true or false)
* int: integer
* double:Real number
* String: Text

**Methods**

>Like Function in C/C++

```java
public static void NAME(){
	STATEMENTS
}
```

**Building Blocks**

* Big programs are built out of small methods.
* Methods can be individually developed, tested and reused.
* user of method does not need to know how it works.
* In Computer Science, this is called "abstraction".

**Array**

* An array is defined using TYPE[]
* Arrays are just another type.

```java
int[] values;//array of int
int[][] values;//int[] is a tyoe
```
* Curly braces can be used to initialized an array. It can only be used when you declare the value.

```java
int[] values = {1, 2, 4};
int size = values.length;//each array has a built-in length var.
```
**OOP**

* Primitives

char, int, boolean, ...

* Objects

String,...

**JAVA's Constructor**


>MEMO
* Class names are capitalized
* 1 Class = 1 file
* Having a main method means the class can be run.



```java
public class Baby{
	String name;
	double weight;
	...;
	Baby[] siblings;
}

class Main{
	public static void main(String[] args){
		Baby ourBaby = new Baby();//constructor
	}
}
```

**Primitives VS References**

* Primitive types are basic java type.
* Reference types are arrays and objects.

Primitives are small enough that they just fit into the cup.

Objects are too big to fit in a variable.

-> Stored somewhere else, variable just the locator(like pointer in C)

**Reference**

The object's location is called a reference.

== compares the references.

JAVA's reference has exactly allocated memory for objects, so you need not to allocate for variables like C/C++.
