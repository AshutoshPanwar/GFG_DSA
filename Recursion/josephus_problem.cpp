// Josephus Problem [If N person are standing in a circle and the k'th person is killed then which person at index will survive.]
// Takes 2 paramete's as (no of person's) & (Person to be killed)
// First person kill will be (n - 1).
// Every recursive call is independent of last person killed. So we need to find the relation as [k + ].
// At some point sum will exceed value > n. So we perform (n %).

#include<iostream>
using namespace std;

int jos(int n, int k)
{
    if(n==1){                   // Base Condition
        return 0;
    }

    return (jos(n-1, k) + k) % n;       // Recursive call
}

int myJos(int n, int k)
{
    return jos(n, k) + 1;       // If consedering first person to be 1.
}

int main()
{
    cout << myJos(5, 3);
    return 0;
}

// OUTPUT:
//     4