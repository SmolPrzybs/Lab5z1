# include <iostream>
using namespace std;
void bin(int);

int main()
{
    cout << "Podaj liczbe dziesietnie: ";
    int wartosc;
    cin >> wartosc;
    cout << "Liczba binarnie: ";
    bin(wartosc);
    cout << endl;
    return 0;
}
void bin(int liczba)
{
    if (liczba >= 2)
        bin(liczba / 2);
    cout << liczba % 2;
}