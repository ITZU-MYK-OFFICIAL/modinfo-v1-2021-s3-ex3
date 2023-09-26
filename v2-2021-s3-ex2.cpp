// v2-2021-s3-ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int n, i, j, m[5][5];


int main()
{
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
            if (j == n - i + 1)
                m[i][j] = 5;
    }
    for (i = 1; i <= n; i++)
    {
        for (j = n - i; j>=1; j--)
            m[i][j] = m[i][j + 1] - 1;
    }

    for (i = 2; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
            if (i + j > n + 1)
                m[i][j] = m[i][j-1] - 1;
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
            cout << m[i][j] << " ";
        cout << endl;
    }


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
