#include <iostream>
#include <random>
#include <time.h>
void matrix_in(int** p)
{
    srand(time(NULL));
    for (int i = 0, j; i < 7; i++) 
    {
        p[i] = new int[10];

        for (j = 0; j < 10; j++) 
        {
            p[i][j] = rand() % 100 - 50;

        }
    }
}

void matrix_out(int** p)
{
    for (int j = 0; j < 7; j++)
    {
        for (int k = 0; k < 10; k++)
        {
            std::cout << p[j][k] << ' ';
        }
        std::cout << std::endl;
    }
}

void matrix_func(int** p, int *S)
{
    int s = 0;
    for (int j = 0; j < 7; j++)
    {
        for (int k = 0; k < 10; k++)
        {
            if (abs(p[j][k] % 7) == 0)
            {
                s++;
                *S = s;
            }
        }
    }
}