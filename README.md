# sheCompiles - Project 2 (Syntax Analyzer)
For this compiler project, we are implementing a syntax analyzer for the programming language Toy, as defined in Project 1 - Lexical Analyzer. A CFG G was defined based on a Backus Normal Form (BNF) description. From this, we wrote a program to create a parsing table for G, and performed a one-symbol lookahead parsing on various input Toy programs, as well as printed appropriate parsing actions.

## Contributors
- Patriz Elaine Daroy
- Catherine Gronkiewicz
- Yohanna Tesfay

## Installation
***Install the software of Yacc in a Unix Environment!***
```
Example for Linux Users:
apt-get install lex 
apt-get install bison 

Example for Terminal/Mac users (make sure brew is installed): 
brew install yacc
```

## Steps to Run & Compile Project 2's Syntax Analyzer
***Helpful Tip: the same steps apply with each toy test case - examples are provided below!***

```
Steps to Run with P1Test.toy:
1. make -f make.mk
2. ./a.out < P1Test.toy > P1TestOutput.txt
 ```
 ```
 Steps to Run with TestCase1.toy:
 1. make -f make.mk
 2. ./a.out < TestCase1.toy > TestCase1Output.txt 
 ```
 ```
 Steps to Run with WorkingTestCase1.toy:
 1. make -f make.mk
 2. ./a.out < WorkingTestCase1.toy > WorkingTestCase1Output.txt 
 ```
 ```
 Steps to Run with FailingTestCase1.toy:
 1. make -f make.mk
 2. ./a.out < FailingTestCase1.toy > FailingTestCase1Output.txt 
 ```
## Test Cases for Project 2's Syntax Analyzer
```
Input Test Cases (root folder of the repository)
- P1Test.toy       - TestCase5.toy    - TestCase10.toy    - WorkingTestCase1.toy
- TestCase1.toy    - TestCase6.toy    - TestCase11.toy    - FailingTestCase1.toy
- TestCase2.toy    - TestCase7.toy    - TestCase12.toy
- TestCase3.toy    - TestCase8.toy    - TestCase13.toy
- TestCase4.toy    - TestCase9.toy    - TestCase14.toy

Outputs (TestCaseOutputFiles folder)
- P1TestOutput.txt       - TestCase5Output.txt    - TestCase10Output.txt    - WorkingTestCase1Output.txt
- TestCase1Output.txt    - TestCase6Output.txt    - TestCase11Output.txt    - FailingTestCase1Output.txt
- TestCase2Output.txt    - TestCase7Output.txt    - TestCase12Output.txt
- TestCase3Output.txt    - TestCase8Output.txt    - TestCase13Output.txt
- TestCase4Output.txt    - TestCase9Output.txt    - TestCase14Output.txt
```

## Design & Implementation Explanations of Project 2
