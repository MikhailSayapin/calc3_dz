#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>

using namespace std;

void shift(int i, int razmzn, double chisla[], char znaks[])
{
    for (int j = i + 1; j < razmzn; j++) {
    chisla[j] = chisla[j + 1];
  };
  for (int j = i; j < razmzn-1; j++) {
    znaks[j] = znaks[j + 1];
  };
}
int main(int argc, char* argv[])
{
    int elements = strlen(argv[1]);
    int razmch = (elements + 1) / 2;
    int razmzn = razmch - 1;
    double chisla[razmch];
    char znaks[razmzn];
    for (int i = 0; i < razmzn; i++)
    {
        znaks[i] = argv[1][2 * i + 1];
    }

    for (int j = 0; j < razmch; j++)
    {
        chisla[j] = (double)(argv[1][2 * j]);
    }

    //Массивы чисел и знаков заполнены

    for (int i = 0; i < razmzn; i++)
    {
        if (znaks[i] == '*')
        {
            chisla[i] = (double)(chisla[i]) * (double)(chisla[i + 1]);
            shift(i, razmzn, chisla, znaks);
            razmzn = razmzn - 1;
        }
    }
    for (int i = 0; i < razmzn; i++)
    {
        if (znaks[i] == '/')
        {
            chisla[i] = (double)(chisla[i]) / (double)(chisla[i + 1]);
            shift(i, razmzn, chisla, znaks);
            razmzn = razmzn - 1;
        }
    }
    for (int i = 0; i < razmzn; i++)
    {
        if (znaks[i] == '+')
        {
            chisla[i] = (double)(chisla[i]) + (double)(chisla[i + 1]);
            shift(i, razmzn, chisla, znaks);
            razmzn = razmzn - 1;
        }
    }
    for (int i = 0; i < razmzn; i++)
    {
        if (znaks[i] == '-')
        {
            chisla[i] = (double)(chisla[i]) - (double)(chisla[i + 1]);
            shift(i, razmzn, chisla, znaks);
            razmzn = razmzn - 1;
        }
    }

    cout << chisla[0];
    return 0;
}

