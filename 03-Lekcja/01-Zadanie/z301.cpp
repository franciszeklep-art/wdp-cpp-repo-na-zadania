#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout << "Podaj dwie liczby calkowite: ";
    cin >> a >> b;
    if (a > b) {
        cout << "Wieksza liczba to: " << a << endl;
        cout << "Mniejsza liczba to: " << b << endl;
        cout << a << ">" << b << endl;
    }
    else if (b > a) {
        cout << "Wieksza liczba to: " << b << endl;
        cout << "Mniejsza liczba to: " << a << endl;
         cout << a << "<" << b << endl;
    }
    else if (a == b) {
        cout << "Podane liczby sa rowne" << endl;
        cout << a << "=" << b << endl;
    }
    return 0;
}