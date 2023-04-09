// How function Execution & Calling take place in general.

#include<iostream>
using namespace std;

void fun1(){
    cout << "fun1\n";
}

void fun2(){
    cout << "Before fun1\n";
    fun1();
    cout << "After fun1\n";
}

// Always Function execution take place form main Function
int main()
{
    cout << "Before fun2\n";
    fun2();
    cout << "After fun2\n";
    return 0;
}


// OUTPUT:
//     Before fun2
//     Before fun1
//     fun1
//     After fun1
//     After fun2