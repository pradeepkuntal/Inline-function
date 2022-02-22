#include<bits/stdc++.h>
using namespace std;

///Inline function: inline function is function that is expended in line when it is called.when inline function is called whole code of 
//inline function is called and substituted at the point of inline function call. this is done by complier at compile time.

//why inline function is used?
/*
    when a function is called it CPU stores the memory address of function call instruction and copies the arguments of function in stack 
    and finally transfer control to the function call.then CPU executes the function code and return the function value in predefined 
    memory location and return control to the calling function.
    this can become overhead if execution time of program is less then the switching time between caller function and called function.
    for small functions time needed for function call is much more than the execution time of the program.
    Inline fucntion increases effiecency if function is small.
*/

/*
   Remember, inlining is only a request to the compiler, not a command. Compiler can ignore the request for inlining. Compiler may not perform inlining in such circumstances like:
1) If a function contains a loop. (for, while, do-while)
2) If a function contains static variables.
3) If a function is recursive.
4) If a function return type is other than void, and the return statement doesn’t exist in function body.
5) If a function contains switch or goto statement.

*/
//Advantage of inline function:
/*
  1. it removes function call overhead problem.
  2. it also reduces overhead of push/pop variable on stack. 
*/
//Disadvantages of inline function:
/*
 1. if we use too many inline functions then size of executable binary file will become very large due to code duplication.
 2. too many inlining can also reduce your instruction cache hit rate thus reducing the instruction fetch from cache memory to primary memory.

 
*/
inline void  fn()
{
   //inline function
}

class Myclass
{
    public:
       Myclass()
       {
           //default
       }
       void show();
};
inline void Myclass::show()
{
    cout<<"this is inline function of class"<<endl;
}


int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cout<<"Hello world"<<endl;


}