#include <iostream>
#include <Windows.h>
#include "Header.h"
#include "Header1.h"

using namespace std;

int main()
{
    int K[73];
    int S = 0;
    int* R[7];
    int input = 0;

    cout << "1 - Матрица." << "\n2 - Массив." << endl;
    cin >> input;
    if (input == 1)
    {
        S = 0;
        matrix_in(R);
        matrix_func(R, &S);
        matrix_out(R);

        cout << endl;
        cout << "S = " << S << endl;
    }
    else
    {
        S = 0;
        mass_in(K);
        mass_func(K, &S);
        mass_out(K);

        cout << endl;
        cout << "S = " << S << endl;
    }
}
