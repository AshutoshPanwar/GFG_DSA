// All Possible SubSet of a string.

#include<iostream>
using namespace std;

void powerSet(string str, string current = "", int index = 0){
    int n = str.length();
    if(index == n){
        cout << current << endl;
        return;
    }
    powerSet(str, current, index+1);
    powerSet(str, current+str[index], index+1);
}

int main()
{
    string str = "abc";
    powerSet(str);
    return 0;
}