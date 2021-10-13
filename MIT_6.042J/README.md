# MIT 6.042J: [Mathematic for Computer Science](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-042j-mathematics-for-computer-science-fall-2010/)

Lecture Note|Assignments
--:|--:
1. Introduction and Proofs  |  [AS]()




# Note

## Lecture 1 & 2: Proofs and Induction


![Proofs](https://github.com/PeterWrighten/MarkDown_Photo/blob/main/Note/Proof.jpg)


>Source Code of Figure
```mermaid
graph LR

A(Proof) --> B(Proposition)
A --> C(Axiom:Proposition Assumed True) --> D(Consistent)
C --> E(Completment)

A --> F(Induction) --> G(Base Induction + Induction)

F --> H(Strong Induction)
```

## Lecture 3 & 4: NumberTheory and Cryptography

![NT](https://github.com/PeterWrighten/MarkDown_Photo/blob/main/Note/NT.jpg)

>Source Code of Figure
```mermaid
graph LR

A(Number Theory) --> B(GCD) --> C(Linear Combination) --> G(TuringCode V1)

A --> D(Modulo) --> E(Multiplicative Inverse) --> F(TuringCode V2)

D --> K(Lemma 1: Proof by Multiplicative inverse) --> H(Euler's Theorem) --> I(Fermat's Little Theorem) --> J(RSA)

D --> L(Lemma 2: Proof by #r and subset) --> H


```
