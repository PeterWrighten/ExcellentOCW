# MIT 6.172 [Performance Engineering of Software Systems](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-172-performance-engineering-of-software-systems-fall-2018/)

# Assignments

Assignment|Info|Solution
--:|--:|--:



# Note

## Lecture 1:Introduction and Matrix Multiplication

**Why Performance Engineering**

Performance is just like currency. (for water and currency instance.)


With the rapid arise of clock frenquency, the temperature  would also arise.(in one microchip, that also means the rise of the number of transistors)

So the multicore architecture has emerged.

Performance is no longer free!!

FOPS= clock frequency $\times$ No. of Coures $\times$ No. of Chips $\times$ Operators per second

**Why is Python so slow and C so fast?**

* Python is interpreted.
* C is compiled directly to machine code.
* Java is compiled to byte-code, which is then interpreted and just-in-time compiled to machine code.
* Bytecode is computer object code that is processed by a program, usually reffered to as a virtual machine, rather than the "real" computer machine.

**JIT Compilation**

* JIT compilers can recover some of the performance lost by interpretation
* The JIT compiler reads the bytecodes in many sections (or in full, rarely) and compiles them dynamically into machine code so the program can run faster. 
* When it executed, it interpreted

**Slow reason**

1. loop order(cache locality)
2. compilation
