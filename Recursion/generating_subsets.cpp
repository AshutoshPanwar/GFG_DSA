// All Possible SubSet of a Set[string].
// For a string of length n, there are going to be 2^n SubSet of Set.
// Recursive solution -> Consider solution of smaller problems and use it to solve bigger problem's.
// Use Recursion Tree to better understand.

#include<iostream>
using namespace std;

void powerSet( string str, string current = "", int index = 0 )       // Using Default Arguments
{
    int n = str.length();

    if(index == n){                     // Base condition
        cout << current << endl;
        return;
    }

    powerSet( str, current, index+1 );
    powerSet( str, current + str[index], index+1 );
}

int main()
{
    string str = "abc";

    powerSet(str);

    return 0;
}

// OUTPUT:
//     ''
//     c
//     b
//     bc
//     a
//     ac
//     ab
//     abc