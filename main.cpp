#include <iostream>
#include <stdlib.h>
#include <cstring>

using namespace std;

int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "Russian");
    int razmch = argc / 2;
    int razmzn = razmch - 1;
    double chisla[razmch];
    char znaks[razmzn];
    int i, k;
    char z;
    for (i = 0; i < razmzn; i++)
    {
        znaks[i] = (argv[2 * i + 2][0]);
    }

    for (int j = 0; j < razmch; j++)
    {
        chisla[j] = atoi(argv[2 * j + 1]);
    }

    // Массивы чисел и знаков заполнены.
    i = 0;
    while (razmch != 1)
    {
        if (znaks[i] == 'x')
        {
            chisla[i] = chisla[i] * chisla[i + 1];
            for (k = i; k < razmch - 2; k++)
            {
                chisla[k + 1] = chisla[k + 2];
                znaks[k] = znaks[k + 1];
            }
            razmch--;
        }

        if (znaks[i] == '/')
        {
            chisla[i] = chisla[i] / chisla[i + 1];
            for (k = i; k < razmch - 2; k++)
            {
                chisla[k + 1] = chisla[k + 2];
                znaks[k] = znaks[k + 1];
            }
            razmch--;
        }
        
      

//===============================================================
        i = 0;
        if (znaks[i] == '+')
        {
            chisla[i] = chisla[i] + chisla[i + 1];
            for (k = i; k < razmch - 2; k++)
            {
                chisla[k + 1] = chisla[k + 2];
                znaks[k] = znaks[k + 1];
            }
            razmch--;
        }

        if (znaks[i] == '-')
        {
            chisla[i] = chisla[i] - chisla[i + 1];
            for (k = i; k < razmch - 2; k++)
            {
                chisla[k + 1] = chisla[k + 2];
                znaks[k] = znaks[k + 1];
            }
            razmch--;
        }
    }

//======================================================================

    cout << "\nРезультат: " << chisla[0] << endl;
    cout << endl;

    return 0;
}
