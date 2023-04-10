// Tower of Hanoi -> Game to move all the disc's from first to last pole without changing the order
// Look for smaller problem as n = 2 to understand the concept.

#include<iostream>
using namespace std;

void ToH(int n, char X, char Y, char Z)
{
    if (n == 1)                                                     // Base Condition
    {
        cout << "Move 1 from " << X << " to " << Z << endl;
        return;
    }

    ToH(n-1, X, Z, Y);                                              // (Disk No, Source, Auxilary, Destination)
    cout << "Move " << n << " from " << X << " to " << Z << endl;
    ToH(n-1, Y, X, Z);                                              // (Disk No, Source, Auxilary, Destination)
}

int main()
{
    int n = 2;

    ToH(n, 'A', 'B', 'C');

    return 0;
}

// OUTPUT:
//     Move 1 from A to B
//     Move 2 from A to C
//     Move 1 from B to C