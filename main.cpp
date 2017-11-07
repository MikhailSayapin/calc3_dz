#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>

using namespace std;

double add(double a, double b)
{
    return a + b;
}
double sub(double a, double b)
{
    return a - b;
}
double mul(double a, double b)
{
    return a * b;
}
double div(double a, double b)
{
    return a / b;
}

int main(int argc, char* argv[])
{
    int elements = strlen(argv[1]);
    int razmch = (elements + 1) / 2;
    int razmzn = razmch - 1;
    char chisla[razmch];
    char znaks[razmzn];
    for (int i = 0; i < razmzn; i++)
    {
        znaks[i] = argv[1][2 * i + 1];
    }

    for (int j = 0; j < razmch; j++)
    {
        chisla[j] = argv[1][2 * j];
    }

    //Массивы чисел и знаков заполнены

    for (int x = 0; x < razmzn; x++)
    {
        if (znaks[x] == '*')
        {
            chisla[x] = mul((double)(chisla[x]), (double)(chisla[x + 1]));
            razmch = razmch - 1;
        }
    }
    for (int x = 0; x < razmzn; x++)
    {
        if (znaks[x] == '/')
        {
            chisla[x] = div((double)(chisla[x]), (double)(chisla[x + 1]));
            razmch = razmch - 1;
        }
    }
    for (int x = 0; x < razmzn; x++)
    {
        if (znaks[x] == '+')
        {
            chisla[x] = add((double)(chisla[x]), (double)(chisla[x + 1]));
            razmch = razmch - 1;
        }
    }
    for (int x = 0; x < razmzn; x++)
    {
        if (znaks[x] == '-')
        {
            chisla[x] = sub((double)(chisla[x]), (double)(chisla[x + 1]));
            razmch = razmch - 1;
        }
    }

    cout << chisla[0];
}
