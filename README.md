# repo
## Overview of C++
* Object-oriented programming (OOP) is easier to design and maintain for programmers**  
* Here apply gcc as my compiler which turns high-level programming language into machine code**
### Evolution of programming languages  
  ![computer-languages](https://user-images.githubusercontent.com/61928785/133008954-d4922157-a8a6-4826-82fd-a1b6bf43217e.png)
### Structure of a C++ program
1. Standard library section  
   `#include` is a specific preprocessor command that effectively copies and pastes the entire text of the file, specified between the angle brackets, into the source code.
3. Main function section
4. Function body section  

    For example, `Helllo World` program  

    ```
    #include <iostream>                //section 1
    using namespace std;
  
    int main(int argc, char *argv[])   //section 2
    { 
      cout << "Hello World!" << endl;  //section 3
     return 0;
    }
   ```
*  `int main(int argc, char *argv[]){}` is called by operating system (OS)  when the program is executed by the computer
*  The `return` keyword tells the program to return a value to the function `int main`
## Function
* What is function?  
Gather program statements in order to approach a certain work
* Why we need function?  
  * We are allowed to call functions, instead of repeating the same section in a program  
  * It is much easier to manage a program when it is divided into pieces by function
## Practice
### Bubble Sort
* Bubble sort is a sorting algorithm, which is based on the idea of repaetedly comparing pairs of adjacent elements and then swapping their position if they exist in the wrong order. At the end, the array should be in acending order  
* How it works (just an example)  
  ![bubble sort](https://miro.medium.com/max/776/1*7QsZkfrRGhAu5yxxeDdzsA.png)

## Reference
* [What is the basic structure of a C++ program?](https://www.educative.io/edpresso/what-is-the-basic-structure-of-a-c-program)
* [An Introduction to Bubble Sort](https://medium.com/karuna-sehgal/an-introduction-to-bubble-sort-d85273acfcd8)
