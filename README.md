# repo
## Overview of C++
**Object-oriented programming (OOP) is easier to design and maintain for programmers**
### Evolution of programming languages  
  ![computer-languages](https://user-images.githubusercontent.com/61928785/133008954-d4922157-a8a6-4826-82fd-a1b6bf43217e.png)
### Structure of a C++ program
1. Standard library section
2. Main function section
3. Function body section  
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
## Reference
* [What is the basic structure of a C++ program?](https://www.educative.io/edpresso/what-is-the-basic-structure-of-a-c-program)
