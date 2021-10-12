#include <iostream>
#include <random>
#include <time.h>
void mass_in(int* p)
{
    srand(time(NULL));
    for (int i = 0; i < 73; i++)
    {
       p[i] = rand() % 100 - 50;
    }
}

void mass_out(int* p) 
{
    for (int i = 0; i < 73; i++)
    {
        std::cout << *(p + i) << ' ';
    }
    std::cout << std::endl;
}

void mass_func(int* p, int* S)
{
    int s = 0;
    for (int i = 0; i < 73; i++)
    {
        if (abs(p[i] % 7) == 0)
        {
            s++;
            *S = s;
        }
    }
}