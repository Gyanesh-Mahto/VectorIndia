/*
Function Pointer in C
---------------------
In C, like normal data pointers (int *, char *, etc), we can have pointers to functions. 
Following is a simple example that shows declaration and function call using function pointer.
*/
#include <stdio.h> 
// A normal function with an int parameter 
// and void return type 
void fun(int a) 
{ 
    printf("Value of a is %d\n", a); 
} 
  
int main() 
{ 
    // fun_ptr is a pointer to function fun()  
    void (*fun_ptr)(int) = &fun; 
  
    /* The above line is equivalent of following two 
       void (*fun_ptr)(int); 
       fun_ptr = &fun;  
    */
  
    // Invoking fun() using fun_ptr 
    (*fun_ptr)(10); 
  
    return 0; 
}

/*
Why do we need an extra bracket around function pointers like fun_ptr in above example?
If we remove bracket, then the expression “void (*fun_ptr)(int)” becomes “void *fun_ptr(int)” 
which is declaration of a function that returns void pointer. See following post for details.

Following are some interesting facts about function pointers.
 
1) Unlike normal pointers, a function pointer points to code, not data. 
Typically a function pointer stores the start of executable code.

2) Unlike normal pointers, we do not allocate de-allocate memory using function pointers.
 
3) A function’s name can also be used to get functions’ address. 
For example, in the below program, we have removed address operator ‘&’ in assignment. 
We have also changed function call by removing *, the program still works.

4) Like normal pointers, we can have an array of function pointers. Below example in point 5 
shows syntax for array of pointers.
 
5) Function pointer can be used in place of switch case. 
For example, in below program, user is asked for a choice between 0 and 2 to do different tasks.

6) Like normal data pointers, a function pointer can be passed as an argument and can also be 
returned from a function.
For example, consider the following C program where wrapper() receives a void fun() as parameter 
and calls the passed function.

7) Many object oriented features in C++ are implemented using function pointers in C. 
For example virtual functions. 
Class methods are another example implemented using function pointers.
*/
