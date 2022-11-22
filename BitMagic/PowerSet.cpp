// Power Set

#include<iostream>
using namespace std;

void PowerSet(string s)
{
    int n = s.length();
    int psize = (1<<n);
    for (int i = 0; i < psize; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i & (1<<j)) != 0)
            {
                cout << s[j];
            }
        }
        cout << endl;
    }
}

int main()
{
    char set[] = { 'a', 'b', 'c' };
    PowerSet(set);
    return 0;
}