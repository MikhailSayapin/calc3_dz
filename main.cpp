#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main(int argc, char* argv[])
{
    int elements = argc - 1;
    int razmch = (elements + 1) / 2;
    int razmzn = (elements + 1) / 2 - 1;
    char chisla[razmch];
    char znaks[razmzn];
    for (int i = 0; i < razmch - 1; i++)
    {
        znaks[i] = argv[2 * (i + 1)][0];
    }

    for (int j = 0; j < razmch; j++)
    {
        chisla[j] = argv[2 * j + 1][0];
    }
    for (int x = 0; x < razmch - 1; x++)
    {
        if (znaks[x] == '*')
            rez1[x] = atoi(chisla[x - 1]) * atoi(chisla[x + 1]);
        if (znaks[x] == '/')
            rez1[x] = atoi(chisla[x - 1]) / atoi(chisla[x + 1]);
    }
    for (int y = 0; y < razmch - 1; y++)
    {
        if (znaks[y] == '+')
        {
            if (znaks[y + 1] == '*')
                rez = chisla[y] + rez[x];
            if (znaks[y - 1] == '/')
                rez = chisla[y] + rez[x];
            if (znaks[y - 1] == '*')
                rez = chisla[y] + rez[x];
            if (znaks[y + 1] == '/')
                rez = chisla[y] + rez[x];
            else
                rez = chisla[y - 1] + chisla[y + 1]
        }
        if (znaks[y] == '-')
        {
            if (znaks[y + 1] == '*')
                rez = chisla[y] - rez[x];
            if (znaks[y - 1] == '/')
                rez = rez[x] - chisla[y];
            if (znaks[y - 1] == '*')
                rez = rez[x] - chisla[y];
            if (znaks[y + 1] == '/')
                rez = chisla[y] - rez[x];
            else
                rez = chisla[y - 1] - chisla[y + 1]
        }
        cout << rez;
        return 0;
    }
