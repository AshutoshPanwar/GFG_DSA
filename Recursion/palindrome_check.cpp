// Palindrome check using recursion -> Reverse string = Original string

#include<iostream>
using namespace std;

bool isPalindrome(string str, int start, int end)
{
    if(start >= end)                                     // Base condition
        return true;

    return ((str[start]==str[end] &&                     // && -> Works in shortcircuit manner
            isPalindrome(str, start + 1, end - 1)));    // Recursive call
}

int main()
{
    string str = "abcba";

    printf("%s", isPalindrome(str,0,str.length()-1) ? "True" : "False");    // String index start from 0

    return 0;
}

// OUTPUT:
//     True