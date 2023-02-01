#include <iostream>
#define SIZEINT 5
#define SIZEDOUBLE 4

template <typename T>                           
T maxn(const T * n, const int m);

template <> 
double maxn<double>(const double * n, const int m);

int main(void)
{
    using namespace std;
    int tab[SIZEINT];
    double tabdouble[SIZEDOUBLE];

    cout << "Podaj 5 wartosci typu int: ";
    for (int i = 0; i < SIZEINT; i++)
        cin >> tab[i];
    cout << "Wartosc maksymalna ze zbioru to: " << maxn(tab,SIZEINT) << endl;

    cout << "Podaj 4 wartosci typu double: ";
    for (int i = 0; i < SIZEDOUBLE; i++)
        cin >> tabdouble[i];
    cout << "Wartosc maksymalna ze zbioru to: " << maxn(tabdouble, SIZEDOUBLE) << endl;

    return 0;
}

template <typename T>
T maxn(const T * n, const int m)
{
    T max = n[0];
    for (int i = 1; i < m; i++)
        max = n[i] > max? n[i]: max;
    return max;
}

template <> 
double maxn<double>(const double * n, const int m)
{
    double max = n[0];
    for (int i = 1; i < m; i++)
        max = n[i] > max? n[i]: max;
    return max;
}


